#include <stdio.h> 
#include <math.h> 
#include <time.h> 
#include "./include/k2c_include.h" 
#include "FRNN_0D_12channels_mar6_10.h" 

float maxabs(k2c_tensor *tensor1, k2c_tensor *tensor2);
struct timeval GetTimeStamp(); 
 
int main(){
float test1_input_1_input_array[12] = {
9.74862143e-01,-1.91462881e+00,1.19438180e+00,2.09435737e-01,-6.75272555e-01,
1.50233544e+00,8.24880554e-01,1.46630742e+00,1.63151496e-01,2.35036952e-01,
1.12326157e-01,-1.26254398e+00,}; 
k2c_tensor test1_input_1_input = {&test1_input_1_input_array[0],2,12,{ 1,12, 1, 1, 1}}; 
float keras_dense_1_test1_array[1] = {
-7.93890506e-02,}; 
k2c_tensor keras_dense_1_test1 = {&keras_dense_1_test1_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test1_array[1] = {0}; 
k2c_tensor c_dense_1_test1 = {&c_dense_1_test1_array[0],2,1,{1,1,1,1,1}}; 
float test2_input_1_input_array[12] = {
1.67485047e-01,8.48544989e-01,-6.07696472e-01,-1.17347975e+00,5.73826654e-01,
-2.36931406e-01,-6.88295208e-01,-1.25897250e+00,-1.90720874e+00,1.05951661e+00,
2.59600861e-01,-5.26925179e-01,}; 
k2c_tensor test2_input_1_input = {&test2_input_1_input_array[0],2,12,{ 1,12, 1, 1, 1}}; 
float keras_dense_1_test2_array[1] = {
-1.97735220e-01,}; 
k2c_tensor keras_dense_1_test2 = {&keras_dense_1_test2_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test2_array[1] = {0}; 
k2c_tensor c_dense_1_test2 = {&c_dense_1_test2_array[0],2,1,{1,1,1,1,1}}; 
float test3_input_1_input_array[12] = {
1.19815857e+00,-1.60728389e+00,-2.46010576e-01,6.01036030e-01,2.81784337e-01,
1.44422444e+00,-1.76162256e+00,1.07801221e+00,1.35514943e+00,-1.37178163e+00,
1.28795770e+00,-1.74621977e+00,}; 
k2c_tensor test3_input_1_input = {&test3_input_1_input_array[0],2,12,{ 1,12, 1, 1, 1}}; 
float keras_dense_1_test3_array[1] = {
-2.87544549e-01,}; 
k2c_tensor keras_dense_1_test3 = {&keras_dense_1_test3_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test3_array[1] = {0}; 
k2c_tensor c_dense_1_test3 = {&c_dense_1_test3_array[0],2,1,{1,1,1,1,1}}; 
float test4_input_1_input_array[12] = {
1.49842295e+00,1.73795210e+00,1.99187876e+00,1.82178010e-01,-5.22233086e-02,
-1.26282192e+00,-1.89682953e+00,1.61828528e+00,-3.20224503e-01,-8.23185882e-01,
-8.63794447e-01,-1.48654695e+00,}; 
k2c_tensor test4_input_1_input = {&test4_input_1_input_array[0],2,12,{ 1,12, 1, 1, 1}}; 
float keras_dense_1_test4_array[1] = {
-1.13669172e-01,}; 
k2c_tensor keras_dense_1_test4 = {&keras_dense_1_test4_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test4_array[1] = {0}; 
k2c_tensor c_dense_1_test4 = {&c_dense_1_test4_array[0],2,1,{1,1,1,1,1}}; 
float test5_input_1_input_array[12] = {
-1.14102234e+00,1.53789698e+00,4.99092557e-01,1.85757698e+00,-1.88779875e+00,
-1.36940737e+00,-2.16363102e-01,-9.44432274e-01,1.78556774e+00,-1.96383502e+00,
1.43933429e+00,3.01756748e-01,}; 
k2c_tensor test5_input_1_input = {&test5_input_1_input_array[0],2,12,{ 1,12, 1, 1, 1}}; 
float keras_dense_1_test5_array[1] = {
1.52665615e-01,}; 
k2c_tensor keras_dense_1_test5 = {&keras_dense_1_test5_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test5_array[1] = {0}; 
k2c_tensor c_dense_1_test5 = {&c_dense_1_test5_array[0],2,1,{1,1,1,1,1}}; 
float test6_input_1_input_array[12] = {
7.24345900e-01,1.85829509e+00,-1.53630551e+00,1.87206538e+00,1.70573056e+00,
-2.18009096e-01,-9.92505330e-01,-1.50946896e+00,5.42160033e-01,1.07828073e-01,
-1.69386977e+00,-1.35278798e+00,}; 
k2c_tensor test6_input_1_input = {&test6_input_1_input_array[0],2,12,{ 1,12, 1, 1, 1}}; 
float keras_dense_1_test6_array[1] = {
-1.57441199e-01,}; 
k2c_tensor keras_dense_1_test6 = {&keras_dense_1_test6_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test6_array[1] = {0}; 
k2c_tensor c_dense_1_test6 = {&c_dense_1_test6_array[0],2,1,{1,1,1,1,1}}; 
float test7_input_1_input_array[12] = {
-5.22326147e-01,-1.38296827e+00,3.73982059e-01,-7.32949667e-03,8.70968804e-02,
6.26404247e-01,-1.17132513e+00,1.84161235e+00,3.70983455e-01,1.29183859e+00,
1.84307904e+00,-3.65388995e-01,}; 
k2c_tensor test7_input_1_input = {&test7_input_1_input_array[0],2,12,{ 1,12, 1, 1, 1}}; 
float keras_dense_1_test7_array[1] = {
-1.20771289e-01,}; 
k2c_tensor keras_dense_1_test7 = {&keras_dense_1_test7_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test7_array[1] = {0}; 
k2c_tensor c_dense_1_test7 = {&c_dense_1_test7_array[0],2,1,{1,1,1,1,1}}; 
float test8_input_1_input_array[12] = {
3.54423302e-01,8.35756521e-01,9.30568293e-01,-8.80070163e-01,4.60420987e-01,
-7.12152416e-01,3.87322182e-01,1.75194096e+00,-1.62142727e+00,-1.81252501e-01,
-1.71089578e+00,-1.10667283e+00,}; 
k2c_tensor test8_input_1_input = {&test8_input_1_input_array[0],2,12,{ 1,12, 1, 1, 1}}; 
float keras_dense_1_test8_array[1] = {
1.67335290e-02,}; 
k2c_tensor keras_dense_1_test8 = {&keras_dense_1_test8_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test8_array[1] = {0}; 
k2c_tensor c_dense_1_test8 = {&c_dense_1_test8_array[0],2,1,{1,1,1,1,1}}; 
float test9_input_1_input_array[12] = {
1.93365477e+00,-1.89361498e+00,7.29155899e-01,9.86636799e-01,1.48788221e+00,
1.60681784e+00,-1.51272083e+00,-3.63667128e-01,-1.79188316e+00,1.16938858e+00,
-3.02039088e-02,6.46979680e-01,}; 
k2c_tensor test9_input_1_input = {&test9_input_1_input_array[0],2,12,{ 1,12, 1, 1, 1}}; 
float keras_dense_1_test9_array[1] = {
-1.95377767e-01,}; 
k2c_tensor keras_dense_1_test9 = {&keras_dense_1_test9_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test9_array[1] = {0}; 
k2c_tensor c_dense_1_test9 = {&c_dense_1_test9_array[0],2,1,{1,1,1,1,1}}; 
float test10_input_1_input_array[12] = {
1.84938811e+00,-4.70047699e-01,1.05411379e-01,-2.58339993e-01,-8.17002125e-01,
-9.64740223e-01,-1.44334787e+00,1.15053539e+00,-1.23542903e+00,-1.86164629e+00,
6.89641473e-01,1.88291207e+00,}; 
k2c_tensor test10_input_1_input = {&test10_input_1_input_array[0],2,12,{ 1,12, 1, 1, 1}}; 
float keras_dense_1_test10_array[1] = {
-9.86666679e-02,}; 
k2c_tensor keras_dense_1_test10 = {&keras_dense_1_test10_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test10_array[1] = {0}; 
k2c_tensor c_dense_1_test10 = {&c_dense_1_test10_array[0],2,1,{1,1,1,1,1}}; 
 float errors[10];
 size_t num_tests = 10; 
size_t num_outputs = 1; 
FRNN_0D_12channels_mar6_10_initialize(); 
FRNN_0D_12channels_mar6_10_reset_states();clock_t t0 = clock(); 
FRNN_0D_12channels_mar6_10(&test1_input_1_input,&c_dense_1_test1); 
FRNN_0D_12channels_mar6_10(&test2_input_1_input,&c_dense_1_test2); 
FRNN_0D_12channels_mar6_10(&test3_input_1_input,&c_dense_1_test3); 
FRNN_0D_12channels_mar6_10(&test4_input_1_input,&c_dense_1_test4); 
FRNN_0D_12channels_mar6_10(&test5_input_1_input,&c_dense_1_test5); 
FRNN_0D_12channels_mar6_10_reset_states();FRNN_0D_12channels_mar6_10(&test6_input_1_input,&c_dense_1_test6); 
FRNN_0D_12channels_mar6_10(&test7_input_1_input,&c_dense_1_test7); 
FRNN_0D_12channels_mar6_10(&test8_input_1_input,&c_dense_1_test8); 
FRNN_0D_12channels_mar6_10(&test9_input_1_input,&c_dense_1_test9); 
FRNN_0D_12channels_mar6_10(&test10_input_1_input,&c_dense_1_test10); 

clock_t t1 = clock(); 
printf("Average time over 10 tests: %e s \n",(double)(t1-t0)/(double)CLOCKS_PER_SEC/(double)10); 
errors[0] = maxabs(&keras_dense_1_test1,&c_dense_1_test1); 
errors[1] = maxabs(&keras_dense_1_test2,&c_dense_1_test2); 
errors[2] = maxabs(&keras_dense_1_test3,&c_dense_1_test3); 
errors[3] = maxabs(&keras_dense_1_test4,&c_dense_1_test4); 
errors[4] = maxabs(&keras_dense_1_test5,&c_dense_1_test5); 
errors[5] = maxabs(&keras_dense_1_test6,&c_dense_1_test6); 
errors[6] = maxabs(&keras_dense_1_test7,&c_dense_1_test7); 
errors[7] = maxabs(&keras_dense_1_test8,&c_dense_1_test8); 
errors[8] = maxabs(&keras_dense_1_test9,&c_dense_1_test9); 
errors[9] = maxabs(&keras_dense_1_test10,&c_dense_1_test10); 
float maxerror = errors[0]; 
for(size_t i=1; i< num_tests*num_outputs;i++){ 
if (errors[i] > maxerror) { 
maxerror = errors[i];}} 
printf("Max absolute error for 10 tests: %e \n", maxerror);
FRNN_0D_12channels_mar6_10_terminate(); 
if (maxerror > 1e-05) { 
return 1;} 
return 0;
} 

float maxabs(k2c_tensor *tensor1, k2c_tensor *tensor2){ 

    float x = 0; 

    float y = 0; 

    for(size_t i=0; i<tensor1->numel; i++){

    y = fabs(tensor1->array[i]-tensor2->array[i]);
    if (y>x) {x=y;}}
    return x;}

