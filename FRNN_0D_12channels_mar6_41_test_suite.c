#include <stdio.h> 
#include <math.h> 
#include <time.h> 
#include "./include/k2c_include.h" 
#include "FRNN_0D_12channels_mar6_41.h" 

float maxabs(k2c_tensor *tensor1, k2c_tensor *tensor2);
struct timeval GetTimeStamp(); 
 
int main(){
float test1_input_1_input_array[12] = {
1.73002309e+00,1.95745521e+00,1.97278870e+00,-1.03973018e+00,-1.18817466e+00,
1.30327305e+00,1.53594856e+00,-7.81647105e-01,3.09180231e-01,-1.96192623e+00,
-7.11366596e-01,-1.96629338e+00,}; 
k2c_tensor test1_input_1_input = {&test1_input_1_input_array[0],2,12,{ 1,12, 1, 1, 1}}; 
float keras_dense_1_test1_array[1] = {
-1.89150482e-01,}; 
k2c_tensor keras_dense_1_test1 = {&keras_dense_1_test1_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test1_array[1] = {0}; 
k2c_tensor c_dense_1_test1 = {&c_dense_1_test1_array[0],2,1,{1,1,1,1,1}}; 
float test2_input_1_input_array[12] = {
-1.84799706e+00,8.05481302e-01,-4.75433282e-01,-1.06729574e+00,9.18389543e-01,
1.07613630e+00,-1.73786455e+00,-1.91965828e-01,-1.21436149e+00,-1.04508991e+00,
-1.87879310e+00,8.56235699e-01,}; 
k2c_tensor test2_input_1_input = {&test2_input_1_input_array[0],2,12,{ 1,12, 1, 1, 1}}; 
float keras_dense_1_test2_array[1] = {
-2.78608620e-01,}; 
k2c_tensor keras_dense_1_test2 = {&keras_dense_1_test2_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test2_array[1] = {0}; 
k2c_tensor c_dense_1_test2 = {&c_dense_1_test2_array[0],2,1,{1,1,1,1,1}}; 
float test3_input_1_input_array[12] = {
-1.79088103e+00,6.73157054e-01,1.63508273e+00,-1.99189414e+00,-1.75782383e+00,
7.64349082e-01,-2.44303331e-01,1.92771979e+00,-9.92885705e-01,5.82850292e-01,
1.60894017e-01,-1.87709691e+00,}; 
k2c_tensor test3_input_1_input = {&test3_input_1_input_array[0],2,12,{ 1,12, 1, 1, 1}}; 
float keras_dense_1_test3_array[1] = {
-3.24162543e-01,}; 
k2c_tensor keras_dense_1_test3 = {&keras_dense_1_test3_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test3_array[1] = {0}; 
k2c_tensor c_dense_1_test3 = {&c_dense_1_test3_array[0],2,1,{1,1,1,1,1}}; 
float test4_input_1_input_array[12] = {
-1.25575017e-01,-1.46687328e+00,4.98784766e-01,-1.99194528e+00,-6.97873248e-01,
9.30812896e-01,-7.04355296e-01,1.26375588e+00,1.92794702e+00,6.22043478e-01,
1.99306688e+00,-1.94143135e+00,}; 
k2c_tensor test4_input_1_input = {&test4_input_1_input_array[0],2,12,{ 1,12, 1, 1, 1}}; 
float keras_dense_1_test4_array[1] = {
-3.40683341e-01,}; 
k2c_tensor keras_dense_1_test4 = {&keras_dense_1_test4_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test4_array[1] = {0}; 
k2c_tensor c_dense_1_test4 = {&c_dense_1_test4_array[0],2,1,{1,1,1,1,1}}; 
float test5_input_1_input_array[12] = {
-1.96903821e-01,5.14094505e-01,9.09848733e-01,1.27159900e+00,1.43038199e+00,
2.83387394e-01,-1.03926983e-01,-7.37498599e-01,4.78860120e-02,-7.11923472e-01,
-4.62645317e-01,-1.78103188e+00,}; 
k2c_tensor test5_input_1_input = {&test5_input_1_input_array[0],2,12,{ 1,12, 1, 1, 1}}; 
float keras_dense_1_test5_array[1] = {
-3.45694125e-01,}; 
k2c_tensor keras_dense_1_test5 = {&keras_dense_1_test5_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test5_array[1] = {0}; 
k2c_tensor c_dense_1_test5 = {&c_dense_1_test5_array[0],2,1,{1,1,1,1,1}}; 
float test6_input_1_input_array[12] = {
1.50090908e+00,-1.90195919e+00,1.10435584e-01,-1.03939829e+00,-3.38356591e-01,
-1.27456857e+00,-2.60664140e-01,-1.43543270e+00,-6.22145138e-01,1.83127870e+00,
-1.69002212e+00,1.52111177e+00,}; 
k2c_tensor test6_input_1_input = {&test6_input_1_input_array[0],2,12,{ 1,12, 1, 1, 1}}; 
float keras_dense_1_test6_array[1] = {
-1.82377219e-01,}; 
k2c_tensor keras_dense_1_test6 = {&keras_dense_1_test6_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test6_array[1] = {0}; 
k2c_tensor c_dense_1_test6 = {&c_dense_1_test6_array[0],2,1,{1,1,1,1,1}}; 
float test7_input_1_input_array[12] = {
-1.31999236e+00,1.16534860e+00,-1.71325872e+00,-1.42804240e+00,8.76308700e-01,
1.67121480e+00,4.80041660e-01,-4.91306331e-02,1.40769958e+00,1.32080823e+00,
1.83056934e+00,-1.83284926e+00,}; 
k2c_tensor test7_input_1_input = {&test7_input_1_input_array[0],2,12,{ 1,12, 1, 1, 1}}; 
float keras_dense_1_test7_array[1] = {
-2.64916152e-01,}; 
k2c_tensor keras_dense_1_test7 = {&keras_dense_1_test7_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test7_array[1] = {0}; 
k2c_tensor c_dense_1_test7 = {&c_dense_1_test7_array[0],2,1,{1,1,1,1,1}}; 
float test8_input_1_input_array[12] = {
-1.54206519e+00,1.48246095e+00,-7.29855873e-01,-1.83730947e+00,1.82650502e-01,
7.95041558e-01,1.08096137e+00,-1.56760350e+00,1.38321755e+00,-2.35296851e-02,
-1.38953131e+00,-9.91584471e-01,}; 
k2c_tensor test8_input_1_input = {&test8_input_1_input_array[0],2,12,{ 1,12, 1, 1, 1}}; 
float keras_dense_1_test8_array[1] = {
-3.04913342e-01,}; 
k2c_tensor keras_dense_1_test8 = {&keras_dense_1_test8_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test8_array[1] = {0}; 
k2c_tensor c_dense_1_test8 = {&c_dense_1_test8_array[0],2,1,{1,1,1,1,1}}; 
float test9_input_1_input_array[12] = {
-4.35518732e-02,9.55410661e-01,1.46828199e+00,-1.47543938e+00,-1.92441247e+00,
-3.12933981e-01,-1.95807221e+00,5.57276852e-01,1.52384132e+00,1.43567970e+00,
1.94732092e-01,1.98709681e+00,}; 
k2c_tensor test9_input_1_input = {&test9_input_1_input_array[0],2,12,{ 1,12, 1, 1, 1}}; 
float keras_dense_1_test9_array[1] = {
-3.14968884e-01,}; 
k2c_tensor keras_dense_1_test9 = {&keras_dense_1_test9_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test9_array[1] = {0}; 
k2c_tensor c_dense_1_test9 = {&c_dense_1_test9_array[0],2,1,{1,1,1,1,1}}; 
float test10_input_1_input_array[12] = {
-1.33586664e+00,1.87648245e-01,-1.38797092e+00,-5.35383022e-01,-7.45244139e-01,
1.01743568e+00,-1.97111584e+00,-2.84904390e-01,1.04205088e-01,-1.91132721e+00,
4.48925287e-01,-1.01128953e-01,}; 
k2c_tensor test10_input_1_input = {&test10_input_1_input_array[0],2,12,{ 1,12, 1, 1, 1}}; 
float keras_dense_1_test10_array[1] = {
-3.00972253e-01,}; 
k2c_tensor keras_dense_1_test10 = {&keras_dense_1_test10_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test10_array[1] = {0}; 
k2c_tensor c_dense_1_test10 = {&c_dense_1_test10_array[0],2,1,{1,1,1,1,1}}; 
 float errors[10];
 size_t num_tests = 10; 
size_t num_outputs = 1; 
FRNN_0D_12channels_mar6_41_initialize(); 
FRNN_0D_12channels_mar6_41_reset_states();clock_t t0 = clock(); 
FRNN_0D_12channels_mar6_41(&test1_input_1_input,&c_dense_1_test1); 
FRNN_0D_12channels_mar6_41(&test2_input_1_input,&c_dense_1_test2); 
FRNN_0D_12channels_mar6_41(&test3_input_1_input,&c_dense_1_test3); 
FRNN_0D_12channels_mar6_41(&test4_input_1_input,&c_dense_1_test4); 
FRNN_0D_12channels_mar6_41(&test5_input_1_input,&c_dense_1_test5); 
FRNN_0D_12channels_mar6_41_reset_states();FRNN_0D_12channels_mar6_41(&test6_input_1_input,&c_dense_1_test6); 
FRNN_0D_12channels_mar6_41(&test7_input_1_input,&c_dense_1_test7); 
FRNN_0D_12channels_mar6_41(&test8_input_1_input,&c_dense_1_test8); 
FRNN_0D_12channels_mar6_41(&test9_input_1_input,&c_dense_1_test9); 
FRNN_0D_12channels_mar6_41(&test10_input_1_input,&c_dense_1_test10); 

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
FRNN_0D_12channels_mar6_41_terminate(); 
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

