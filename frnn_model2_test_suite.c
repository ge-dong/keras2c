#include <stdio.h> 
#include <math.h> 
#include <time.h> 
#include "frnn_model2.h" 

float maxabs(k2c_tensor *tensor1, k2c_tensor *tensor2);
struct timeval GetTimeStamp(); 
 
int main(){
float test1_input_2_input_array[14] = {
-8.61281475e-01,-1.63808539e+00,9.32995475e-02,1.33147283e+00,1.42969879e+00,
-1.34855492e+00,-4.82463268e-01,-1.66431733e+00,-2.63605022e-01,-1.15596051e-01,
-8.34206985e-01,1.10877584e+00,3.51269362e-01,5.34107116e-01,}; 
k2c_tensor test1_input_2_input = {&test1_input_2_input_array[0],2,14,{ 1,14, 1, 1, 1}}; 
float keras_dense_1_test1_array[1] = {
1.02394953e-01,}; 
k2c_tensor keras_dense_1_test1 = {&keras_dense_1_test1_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_1_test1_array[1] = {0}; 
k2c_tensor c_dense_1_test1 = {&c_dense_1_test1_array[0],1,1,{1,1,1,1,1}}; 
float test2_input_2_input_array[14] = {
7.39920311e-01,-6.67049592e-01,-8.42392091e-01,-9.03693946e-01,1.37256078e+00,
-9.34381282e-01,-8.48063863e-01,1.14830286e-02,1.59007796e+00,-8.35921197e-01,
6.17630607e-01,1.92806446e+00,-7.45825106e-01,-1.91805685e+00,}; 
k2c_tensor test2_input_2_input = {&test2_input_2_input_array[0],2,14,{ 1,14, 1, 1, 1}}; 
float keras_dense_1_test2_array[1] = {
-1.24015234e-01,}; 
k2c_tensor keras_dense_1_test2 = {&keras_dense_1_test2_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_1_test2_array[1] = {0}; 
k2c_tensor c_dense_1_test2 = {&c_dense_1_test2_array[0],1,1,{1,1,1,1,1}}; 
float test3_input_2_input_array[14] = {
-1.50136168e+00,4.05307742e-01,3.63527410e-01,7.64034786e-01,-2.05125377e-02,
1.24253822e+00,1.80761601e+00,1.86379937e+00,-1.19696594e-01,-1.27367847e+00,
-1.72720313e+00,-9.68190386e-01,-9.02052295e-01,7.44212749e-01,}; 
k2c_tensor test3_input_2_input = {&test3_input_2_input_array[0],2,14,{ 1,14, 1, 1, 1}}; 
float keras_dense_1_test3_array[1] = {
1.14278600e-01,}; 
k2c_tensor keras_dense_1_test3 = {&keras_dense_1_test3_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_1_test3_array[1] = {0}; 
k2c_tensor c_dense_1_test3 = {&c_dense_1_test3_array[0],1,1,{1,1,1,1,1}}; 
float test4_input_2_input_array[14] = {
4.16178577e-01,5.46805569e-01,8.42870534e-01,6.08127358e-01,-8.69534947e-01,
8.81494707e-01,7.54305109e-02,8.43217923e-01,1.10714493e+00,-3.36921798e-02,
-1.43943373e+00,1.15446579e+00,1.27040799e+00,-1.84016839e+00,}; 
k2c_tensor test4_input_2_input = {&test4_input_2_input_array[0],2,14,{ 1,14, 1, 1, 1}}; 
float keras_dense_1_test4_array[1] = {
-6.13905005e-02,}; 
k2c_tensor keras_dense_1_test4 = {&keras_dense_1_test4_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_1_test4_array[1] = {0}; 
k2c_tensor c_dense_1_test4 = {&c_dense_1_test4_array[0],1,1,{1,1,1,1,1}}; 
float test5_input_2_input_array[14] = {
-9.00569317e-01,2.12059819e-01,-1.47033544e+00,-1.24363577e+00,-1.88198861e+00,
-1.99235200e+00,1.68648122e+00,1.26030789e-01,7.84433540e-01,-1.68380308e-01,
-1.94595770e+00,1.26547446e-01,-1.78954299e+00,-2.97017639e-01,}; 
k2c_tensor test5_input_2_input = {&test5_input_2_input_array[0],2,14,{ 1,14, 1, 1, 1}}; 
float keras_dense_1_test5_array[1] = {
2.09906653e-01,}; 
k2c_tensor keras_dense_1_test5 = {&keras_dense_1_test5_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_1_test5_array[1] = {0}; 
k2c_tensor c_dense_1_test5 = {&c_dense_1_test5_array[0],1,1,{1,1,1,1,1}}; 
float test6_input_2_input_array[14] = {
-4.36366681e-01,3.17817759e-01,-1.69330164e-01,1.65461726e+00,-7.40600842e-01,
1.35901226e+00,-4.05285874e-01,-1.13442713e+00,-1.71145496e+00,6.16243064e-01,
2.09087257e-01,2.60957326e-02,-7.20015405e-01,-2.75532778e-01,}; 
k2c_tensor test6_input_2_input = {&test6_input_2_input_array[0],2,14,{ 1,14, 1, 1, 1}}; 
float keras_dense_1_test6_array[1] = {
-3.16817984e-02,}; 
k2c_tensor keras_dense_1_test6 = {&keras_dense_1_test6_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_1_test6_array[1] = {0}; 
k2c_tensor c_dense_1_test6 = {&c_dense_1_test6_array[0],1,1,{1,1,1,1,1}}; 
float test7_input_2_input_array[14] = {
1.20750900e+00,-1.29729500e+00,1.40292292e+00,-1.06493450e+00,-1.75882696e+00,
-1.65686880e+00,-1.99075454e+00,-1.83222202e+00,3.75224403e-01,1.00526636e+00,
-1.38178078e+00,-6.22661664e-01,1.64464426e+00,-1.50291406e+00,}; 
k2c_tensor test7_input_2_input = {&test7_input_2_input_array[0],2,14,{ 1,14, 1, 1, 1}}; 
float keras_dense_1_test7_array[1] = {
9.98714566e-02,}; 
k2c_tensor keras_dense_1_test7 = {&keras_dense_1_test7_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_1_test7_array[1] = {0}; 
k2c_tensor c_dense_1_test7 = {&c_dense_1_test7_array[0],1,1,{1,1,1,1,1}}; 
float test8_input_2_input_array[14] = {
2.08203735e-01,9.11115323e-02,1.31979717e+00,9.70945464e-01,1.01009574e+00,
1.37703671e+00,5.44718778e-01,1.50734971e+00,-1.10623490e-01,1.83980809e-01,
1.98202239e+00,-9.18029565e-02,-1.33623791e-01,-6.46112470e-02,}; 
k2c_tensor test8_input_2_input = {&test8_input_2_input_array[0],2,14,{ 1,14, 1, 1, 1}}; 
float keras_dense_1_test8_array[1] = {
-2.01309115e-01,}; 
k2c_tensor keras_dense_1_test8 = {&keras_dense_1_test8_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_1_test8_array[1] = {0}; 
k2c_tensor c_dense_1_test8 = {&c_dense_1_test8_array[0],1,1,{1,1,1,1,1}}; 
float test9_input_2_input_array[14] = {
-3.19873231e-01,2.15309694e-01,6.49811425e-01,-1.31698007e+00,1.41759040e+00,
1.33718896e+00,-1.80568676e+00,-1.76501792e+00,1.81593561e+00,-5.12545205e-01,
1.15673159e+00,1.11047267e+00,1.64815317e+00,6.97102652e-01,}; 
k2c_tensor test9_input_2_input = {&test9_input_2_input_array[0],2,14,{ 1,14, 1, 1, 1}}; 
float keras_dense_1_test9_array[1] = {
-2.09735230e-01,}; 
k2c_tensor keras_dense_1_test9 = {&keras_dense_1_test9_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_1_test9_array[1] = {0}; 
k2c_tensor c_dense_1_test9 = {&c_dense_1_test9_array[0],1,1,{1,1,1,1,1}}; 
float test10_input_2_input_array[14] = {
-7.72383486e-01,-1.78580528e+00,6.20207631e-01,-1.01953417e+00,-1.57170857e+00,
-1.69373996e-01,-1.42589789e+00,1.12104101e+00,1.65075087e+00,-1.93140606e+00,
1.18782115e+00,-1.41102571e-01,-4.46488695e-01,-1.31800410e+00,}; 
k2c_tensor test10_input_2_input = {&test10_input_2_input_array[0],2,14,{ 1,14, 1, 1, 1}}; 
float keras_dense_1_test10_array[1] = {
1.98923144e-02,}; 
k2c_tensor keras_dense_1_test10 = {&keras_dense_1_test10_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_1_test10_array[1] = {0}; 
k2c_tensor c_dense_1_test10 = {&c_dense_1_test10_array[0],1,1,{1,1,1,1,1}}; 
 float errors[10];
 size_t num_tests = 10; 
size_t num_outputs = 1; 
frnn_model2_initialize(); 
clock_t t0 = clock(); 
frnn_model2(&test1_input_2_input,&c_dense_1_test1); 
frnn_model2(&test2_input_2_input,&c_dense_1_test2); 
frnn_model2(&test3_input_2_input,&c_dense_1_test3); 
frnn_model2(&test4_input_2_input,&c_dense_1_test4); 
frnn_model2(&test5_input_2_input,&c_dense_1_test5); 
frnn_model2(&test6_input_2_input,&c_dense_1_test6); 
frnn_model2(&test7_input_2_input,&c_dense_1_test7); 
frnn_model2(&test8_input_2_input,&c_dense_1_test8); 
frnn_model2(&test9_input_2_input,&c_dense_1_test9); 
frnn_model2(&test10_input_2_input,&c_dense_1_test10); 

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
frnn_model2_terminate(); 
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

