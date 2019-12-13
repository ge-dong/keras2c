#include <string.h>
#include <stddef.h>
#include <stdarg.h>
#include "k2c_include.h"

void k2c_add(k2c_tensor* output, const size_t num_tensors,...){
/*  Element-wise sum of several tensors. */
/* num_tensors is the total number of tensors */
/* results are stored in output tensor */
/* takes variable number of tensors as inputs: */
/* add(output, num_tensors, tensor1, tensor2, tensor3) etc */
  
  va_list args;
  const k2c_tensor *arrptr;
  va_start (args, num_tensors);     
  memset(output->array, 0, output->numel*sizeof(output->array[0]));
  
  for (size_t i = 0; i < num_tensors; ++i){
    arrptr = va_arg(args, k2c_tensor*);
    for (size_t j=0; j<output->numel; ++j){
      output->array[j] += arrptr->array[j];
    }
  }
  va_end (args);             
}

void k2c_subtract(k2c_tensor* output, const size_t num_tensors,
	      const k2c_tensor* tensor1, const k2c_tensor* tensor2) {
  /*  Element-wise difference of two tensors. */
  /* output[i] = tensor1[i] - tensor2[i] */
  /* results are stored in output array */

  for (size_t i=0;i<output->numel;++i){
    output->array[i] = tensor1->array[i]-
      tensor2->array[i];
  }
}

void k2c_multiply(k2c_tensor* output, const size_t num_tensors,...){
/*  Element-wise product of several tensors. */
/* num_tensors is the total number of tensors */
/* results are stored in output array */
/* takes variable number of tensors as inputs: */
/* multiply(output, num_tensors, tensor1, tensor2,...tensorN) etc */
  
  va_list args;
  const k2c_tensor *arrptr;
  va_start (args, num_tensors);

  for (size_t i=0;i<output->numel;++i){
    output->array[i] = 1.0f;
  }
  
  for (size_t i = 0; i < num_tensors; ++i){
    arrptr = va_arg(args, k2c_tensor*);
    for (size_t j=0; j<output->numel; ++j){
      output->array[j] *= arrptr->array[j];
    }
  }
  va_end (args);             
}

void k2c_average(k2c_tensor* output, const size_t num_tensors,...){
/*  Element-wise average of several tensors. */
/* num_tensors is the total number of tensors */
/* results are stored in output array */
/* takes variable number of tensors as inputs: */
/* average(output, num_tensors, tensor1, tensor2,...tensorN) etc */
  
  va_list args;
  const k2c_tensor *arrptr;
  const float num_tensors_inv = 1.0f/num_tensors;
  
  va_start (args, num_tensors);     
  memset(output->array, 0, output->numel*sizeof(output->array[0]));
  for (size_t i = 0; i < num_tensors; ++i){
    arrptr = va_arg(args, k2c_tensor*);
    for (size_t j=0; j<output->numel; ++j){
      output->array[j] += arrptr->array[j]*num_tensors_inv;
    }
  }
  va_end (args);             
}

void k2c_max(k2c_tensor* output, const size_t num_tensors,...){
/*  Element-wise maximum of several tensors. */
/* num_tensors is the total number of tensors */
/* results are stored in output array */
/* takes variable number of tensors as inputs: */
/* max(output, num_tensors, tensor1, tensor2,...tensorN) etc */

  
  va_list args;
  const k2c_tensor *arrptr;
  va_start (args, num_tensors);
  arrptr = va_arg(args, k2c_tensor*);

  for (size_t i=0;i<output->numel;++i){
    output->array[i] = arrptr->array[i];
  }
  
  for (size_t i = 0; i < num_tensors-1; ++i){
    arrptr = va_arg(args, k2c_tensor*);
    for (size_t j=0; j<output->numel; ++j){
      if (output->array[j]<arrptr->array[j]){
	output->array[j] = arrptr->array[j];
      }
    }
  }
  va_end (args);             
}

void k2c_min(k2c_tensor* output, const size_t num_tensors,...) {
/*  Element-wise minimum of several tensors. */
/* num_tensors is the total number of tensors */
/* results are stored in output array */
/* takes variable number of tensors as inputs: */
/* min(output, num_tensors, tensor1, tensor2,...tensorN) etc */

  va_list args;
  const k2c_tensor *arrptr;
  va_start (args, num_tensors);
  arrptr = va_arg(args, k2c_tensor*);

  for (size_t i=0;i<output->numel;++i){
    output->array[i] = arrptr->array[i];
  }
  
  for (size_t i = 0; i < num_tensors-1; ++i){
    arrptr = va_arg(args, k2c_tensor*);
    for (size_t j=0; j<output->numel; ++j){
      if (output->array[j]>arrptr->array[j]){
	output->array[j] = arrptr->array[j];
      }
    }
  }
  va_end (args);             
}

void k2c_concatenate(k2c_tensor* output, const size_t axis, const size_t num_tensors,...) {
/*  Concatenation several tensors. */
/* num_tensors is the total number of tensors */
/* axis is the axis along which to concatenate */
/* results are stored in output array */
/* takes variable number of tensors as inputs: */
/* concatenate(output, num_tensors, axis, tensor1, tensor2,...tensorN) etc */

  va_list args;
  const k2c_tensor* arrptr;
  size_t  offset = 0;
  size_t outidx;
  size_t insub[K2C_MAX_NDIM], outsub[K2C_MAX_NDIM];
  va_start (args, num_tensors);     

  for (size_t i=0; i<num_tensors; ++i) {
    arrptr = va_arg(args, k2c_tensor*);
    for (size_t j=0; j<arrptr->numel; ++j) {
      k2c_idx2sub(j,insub,arrptr->shape,arrptr->ndim);
      memcpy(outsub,insub,K2C_MAX_NDIM*sizeof(size_t));
      outsub[axis] += offset;
      outidx = k2c_sub2idx(outsub,output->shape, output->ndim);
      output->array[outidx] = arrptr->array[j];
    }
    offset += arrptr->shape[axis];
  }
  va_end (args);               
}
