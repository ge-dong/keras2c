#include <stdio.h> 
#include <math.h> 
#include <time.h> 
#include "./include/k2c_include.h" 
#include "FRNN_0D_12channels_ipsip.h" 

float maxabs(k2c_tensor *tensor1, k2c_tensor *tensor2);
struct timeval GetTimeStamp(); 
 
int main(){
float test1_input_1_input_array[12] = {
8.88587885e-01,8.52706449e-01,9.97487583e-01,7.46488939e-01,-5.38781407e-01,
9.57539530e-01,7.77839220e-02,-5.56872679e-01,-1.89148676e+00,-6.62380395e-01,
-1.96414794e+00,-2.84055559e-01,}; 
k2c_tensor test1_input_1_input = {&test1_input_1_input_array[0],2,12,{ 1,12, 1, 1, 1}}; 
float keras_dense_1_test1_array[1] = {
-1.33473262e-01,}; 
k2c_tensor keras_dense_1_test1 = {&keras_dense_1_test1_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test1_array[1] = {0}; 
k2c_tensor c_dense_1_test1 = {&c_dense_1_test1_array[0],2,1,{1,1,1,1,1}}; 
float test2_input_1_input_array[12] = {
7.15864171e-01,-1.40914652e+00,5.15587384e-01,-4.01210050e-01,-7.47173868e-01,
1.83954308e+00,-3.03277367e-01,1.22695988e+00,-3.53261126e-02,1.88879303e+00,
1.16273022e+00,-1.51182884e+00,}; 
k2c_tensor test2_input_1_input = {&test2_input_1_input_array[0],2,12,{ 1,12, 1, 1, 1}}; 
float keras_dense_1_test2_array[1] = {
-2.19468981e-01,}; 
k2c_tensor keras_dense_1_test2 = {&keras_dense_1_test2_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test2_array[1] = {0}; 
k2c_tensor c_dense_1_test2 = {&c_dense_1_test2_array[0],2,1,{1,1,1,1,1}}; 
float test3_input_1_input_array[12] = {
-1.46988712e+00,-9.06310633e-01,-1.66753618e+00,1.08361170e-01,1.91993315e+00,
-1.62366163e+00,-1.26066311e+00,1.93960654e-01,-4.69616840e-01,3.99125862e-01,
-6.90318461e-01,-1.74610126e+00,}; 
k2c_tensor test3_input_1_input = {&test3_input_1_input_array[0],2,12,{ 1,12, 1, 1, 1}}; 
float keras_dense_1_test3_array[1] = {
-2.02609867e-01,}; 
k2c_tensor keras_dense_1_test3 = {&keras_dense_1_test3_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test3_array[1] = {0}; 
k2c_tensor c_dense_1_test3 = {&c_dense_1_test3_array[0],2,1,{1,1,1,1,1}}; 
float test4_input_1_input_array[12] = {
1.99734382e+00,-1.89309631e+00,3.88053784e-01,-1.67150171e+00,-1.85140914e+00,
2.01072883e-01,1.53237229e+00,9.62871380e-02,-4.95822633e-02,1.68182341e+00,
6.06072489e-01,3.72478526e-01,}; 
k2c_tensor test4_input_1_input = {&test4_input_1_input_array[0],2,12,{ 1,12, 1, 1, 1}}; 
float keras_dense_1_test4_array[1] = {
-2.77948886e-01,}; 
k2c_tensor keras_dense_1_test4 = {&keras_dense_1_test4_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test4_array[1] = {0}; 
k2c_tensor c_dense_1_test4 = {&c_dense_1_test4_array[0],2,1,{1,1,1,1,1}}; 
float test5_input_1_input_array[12] = {
-4.06752199e-01,-5.06967915e-01,1.31726832e-01,-1.85820954e+00,-9.19533560e-01,
-1.21535895e-01,7.27020333e-01,-1.11355849e+00,-1.25271123e+00,-4.48412941e-01,
6.40398053e-02,1.80380409e+00,}; 
k2c_tensor test5_input_1_input = {&test5_input_1_input_array[0],2,12,{ 1,12, 1, 1, 1}}; 
float keras_dense_1_test5_array[1] = {
-2.65103191e-01,}; 
k2c_tensor keras_dense_1_test5 = {&keras_dense_1_test5_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test5_array[1] = {0}; 
k2c_tensor c_dense_1_test5 = {&c_dense_1_test5_array[0],2,1,{1,1,1,1,1}}; 
float test6_input_1_input_array[12] = {
1.82927172e+00,-1.42630729e+00,-6.26280268e-01,-2.66531417e-01,7.81545669e-01,
-1.19683942e+00,4.64479455e-01,3.45595177e-01,-1.77118349e+00,-1.98714831e+00,
1.61501836e+00,-7.09382570e-01,}; 
k2c_tensor test6_input_1_input = {&test6_input_1_input_array[0],2,12,{ 1,12, 1, 1, 1}}; 
float keras_dense_1_test6_array[1] = {
-9.36516225e-02,}; 
k2c_tensor keras_dense_1_test6 = {&keras_dense_1_test6_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test6_array[1] = {0}; 
k2c_tensor c_dense_1_test6 = {&c_dense_1_test6_array[0],2,1,{1,1,1,1,1}}; 
float test7_input_1_input_array[12] = {
-1.73279377e+00,1.74675151e+00,1.45129727e+00,2.08258980e-01,-7.82066334e-02,
-6.32145982e-01,-9.34052738e-01,-5.12798793e-01,-5.99627987e-01,1.05552968e+00,
-1.35667903e+00,8.89938824e-01,}; 
k2c_tensor test7_input_1_input = {&test7_input_1_input_array[0],2,12,{ 1,12, 1, 1, 1}}; 
float keras_dense_1_test7_array[1] = {
-1.14465863e-01,}; 
k2c_tensor keras_dense_1_test7 = {&keras_dense_1_test7_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test7_array[1] = {0}; 
k2c_tensor c_dense_1_test7 = {&c_dense_1_test7_array[0],2,1,{1,1,1,1,1}}; 
float test8_input_1_input_array[12] = {
4.98174273e-01,8.45232209e-01,1.62292285e+00,-1.54044122e-01,-1.95561676e+00,
-5.81084639e-01,-1.50817847e+00,1.71295303e+00,1.36132678e+00,-1.55798563e+00,
1.62794439e+00,-1.88502157e+00,}; 
k2c_tensor test8_input_1_input = {&test8_input_1_input_array[0],2,12,{ 1,12, 1, 1, 1}}; 
float keras_dense_1_test8_array[1] = {
-8.49545598e-02,}; 
k2c_tensor keras_dense_1_test8 = {&keras_dense_1_test8_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test8_array[1] = {0}; 
k2c_tensor c_dense_1_test8 = {&c_dense_1_test8_array[0],2,1,{1,1,1,1,1}}; 
float test9_input_1_input_array[12] = {
4.00734279e-02,5.21210015e-01,1.30453303e+00,1.69385754e+00,6.84689750e-01,
1.03431258e-01,-1.77552406e-01,1.76878052e+00,-6.47126670e-01,1.59299246e+00,
-1.67117609e+00,-1.76309642e-01,}; 
k2c_tensor test9_input_1_input = {&test9_input_1_input_array[0],2,12,{ 1,12, 1, 1, 1}}; 
float keras_dense_1_test9_array[1] = {
-2.22167343e-01,}; 
k2c_tensor keras_dense_1_test9 = {&keras_dense_1_test9_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test9_array[1] = {0}; 
k2c_tensor c_dense_1_test9 = {&c_dense_1_test9_array[0],2,1,{1,1,1,1,1}}; 
float test10_input_1_input_array[12] = {
1.55149028e+00,-1.37657525e+00,-7.67517374e-01,1.14447774e+00,2.46686688e-01,
-1.09433873e+00,-1.99606373e+00,-1.47333075e-02,6.34870477e-01,7.70141107e-02,
-1.68210822e+00,-4.76741317e-01,}; 
k2c_tensor test10_input_1_input = {&test10_input_1_input_array[0],2,12,{ 1,12, 1, 1, 1}}; 
float keras_dense_1_test10_array[1] = {
-2.24064663e-01,}; 
k2c_tensor keras_dense_1_test10 = {&keras_dense_1_test10_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test10_array[1] = {0}; 
k2c_tensor c_dense_1_test10 = {&c_dense_1_test10_array[0],2,1,{1,1,1,1,1}}; 
 float errors[10];
 size_t num_tests = 10; 
size_t num_outputs = 1; 
FRNN_0D_12channels_ipsip_initialize(); 
FRNN_0D_12channels_ipsip_reset_states();clock_t t0 = clock(); 
FRNN_0D_12channels_ipsip(&test1_input_1_input,&c_dense_1_test1); 
FRNN_0D_12channels_ipsip(&test2_input_1_input,&c_dense_1_test2); 
FRNN_0D_12channels_ipsip(&test3_input_1_input,&c_dense_1_test3); 
FRNN_0D_12channels_ipsip(&test4_input_1_input,&c_dense_1_test4); 
FRNN_0D_12channels_ipsip(&test5_input_1_input,&c_dense_1_test5); 
FRNN_0D_12channels_ipsip_reset_states();FRNN_0D_12channels_ipsip(&test6_input_1_input,&c_dense_1_test6); 
FRNN_0D_12channels_ipsip(&test7_input_1_input,&c_dense_1_test7); 
FRNN_0D_12channels_ipsip(&test8_input_1_input,&c_dense_1_test8); 
FRNN_0D_12channels_ipsip(&test9_input_1_input,&c_dense_1_test9); 
FRNN_0D_12channels_ipsip(&test10_input_1_input,&c_dense_1_test10); 

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
FRNN_0D_12channels_ipsip_terminate(); 
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

