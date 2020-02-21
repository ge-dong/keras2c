#include <stdio.h> 
#include <math.h> 
#include <time.h> 
#include "./include/k2c_include.h" 
#include "FRNN_0D_small.h" 

float maxabs(k2c_tensor *tensor1, k2c_tensor *tensor2);
struct timeval GetTimeStamp(); 
 
int main(){
float test1_input_1_input_array[14] = {
-1.04885098e+00,6.51927411e-01,2.08382066e-01,-1.08075263e+00,3.46089450e-01,
-2.61369527e-01,1.14471464e+00,-1.15482148e+00,-7.98783443e-01,8.48703602e-01,
1.94431275e-01,-3.83357589e-01,4.47606584e-01,-7.58875892e-01,}; 
k2c_tensor test1_input_1_input = {&test1_input_1_input_array[0],2,14,{ 1,14, 1, 1, 1}}; 
float keras_dense_1_test1_array[1] = {
-3.46573703e-02,}; 
k2c_tensor keras_dense_1_test1 = {&keras_dense_1_test1_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test1_array[1] = {0}; 
k2c_tensor c_dense_1_test1 = {&c_dense_1_test1_array[0],2,1,{1,1,1,1,1}}; 
float test2_input_1_input_array[14] = {
-1.65606901e+00,-1.83440982e+00,-1.59292101e+00,9.78150441e-01,4.60924655e-01,
8.04222933e-02,-1.20736885e+00,-1.55815001e+00,4.31483744e-01,1.61523742e+00,
-6.67816071e-01,-1.54688838e+00,1.53298872e+00,-9.43528203e-01,}; 
k2c_tensor test2_input_1_input = {&test2_input_1_input_array[0],2,14,{ 1,14, 1, 1, 1}}; 
float keras_dense_1_test2_array[1] = {
8.93856585e-02,}; 
k2c_tensor keras_dense_1_test2 = {&keras_dense_1_test2_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test2_array[1] = {0}; 
k2c_tensor c_dense_1_test2 = {&c_dense_1_test2_array[0],2,1,{1,1,1,1,1}}; 
float test3_input_1_input_array[14] = {
-1.36834662e-01,-5.52263225e-01,-1.09705349e+00,-1.19853772e+00,7.82338131e-01,
-5.98185719e-01,-1.75489730e+00,-1.98553192e+00,1.89388217e+00,8.19643112e-01,
9.86601953e-01,-1.22129264e+00,1.70299851e+00,-8.52085160e-01,}; 
k2c_tensor test3_input_1_input = {&test3_input_1_input_array[0],2,14,{ 1,14, 1, 1, 1}}; 
float keras_dense_1_test3_array[1] = {
8.03638771e-02,}; 
k2c_tensor keras_dense_1_test3 = {&keras_dense_1_test3_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test3_array[1] = {0}; 
k2c_tensor c_dense_1_test3 = {&c_dense_1_test3_array[0],2,1,{1,1,1,1,1}}; 
float test4_input_1_input_array[14] = {
-1.02935239e+00,1.91406694e+00,-1.10795082e+00,7.02524457e-01,-1.51379986e+00,
-9.12064899e-01,9.25734232e-01,-6.12689177e-01,1.37593445e+00,-4.68952439e-01,
1.53826609e+00,-1.93143319e+00,1.00835395e+00,-1.39629610e+00,}; 
k2c_tensor test4_input_1_input = {&test4_input_1_input_array[0],2,14,{ 1,14, 1, 1, 1}}; 
float keras_dense_1_test4_array[1] = {
1.28180176e-01,}; 
k2c_tensor keras_dense_1_test4 = {&keras_dense_1_test4_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test4_array[1] = {0}; 
k2c_tensor c_dense_1_test4 = {&c_dense_1_test4_array[0],2,1,{1,1,1,1,1}}; 
float test5_input_1_input_array[14] = {
1.28750847e+00,8.46730896e-01,-1.68534860e+00,-1.45449554e-01,-5.90584001e-01,
1.82945323e+00,7.99893006e-01,8.39979736e-01,1.04289388e+00,1.60672555e-01,
-1.14309843e-01,-7.64289187e-01,-1.66882202e+00,6.06621251e-01,}; 
k2c_tensor test5_input_1_input = {&test5_input_1_input_array[0],2,14,{ 1,14, 1, 1, 1}}; 
float keras_dense_1_test5_array[1] = {
-1.10151209e-02,}; 
k2c_tensor keras_dense_1_test5 = {&keras_dense_1_test5_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test5_array[1] = {0}; 
k2c_tensor c_dense_1_test5 = {&c_dense_1_test5_array[0],2,1,{1,1,1,1,1}}; 
float test6_input_1_input_array[14] = {
-9.16732549e-01,1.48718217e+00,1.27562215e+00,1.86258671e+00,-6.90809349e-01,
-1.14412746e+00,-1.83307565e+00,-1.36337237e+00,7.15104263e-01,-2.72721216e-01,
-1.00524278e+00,5.56442683e-01,-8.35380880e-01,-9.30051305e-01,}; 
k2c_tensor test6_input_1_input = {&test6_input_1_input_array[0],2,14,{ 1,14, 1, 1, 1}}; 
float keras_dense_1_test6_array[1] = {
1.87362045e-01,}; 
k2c_tensor keras_dense_1_test6 = {&keras_dense_1_test6_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test6_array[1] = {0}; 
k2c_tensor c_dense_1_test6 = {&c_dense_1_test6_array[0],2,1,{1,1,1,1,1}}; 
float test7_input_1_input_array[14] = {
1.87938550e+00,1.96370331e+00,1.06235784e+00,8.53590627e-01,3.67091641e-02,
1.99194704e+00,-5.44289543e-01,-1.54903414e+00,7.43857051e-01,3.86133821e-01,
-3.07689812e-01,-7.41413202e-01,-2.77047781e-01,1.74225930e+00,}; 
k2c_tensor test7_input_1_input = {&test7_input_1_input_array[0],2,14,{ 1,14, 1, 1, 1}}; 
float keras_dense_1_test7_array[1] = {
-2.44294433e-03,}; 
k2c_tensor keras_dense_1_test7 = {&keras_dense_1_test7_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test7_array[1] = {0}; 
k2c_tensor c_dense_1_test7 = {&c_dense_1_test7_array[0],2,1,{1,1,1,1,1}}; 
float test8_input_1_input_array[14] = {
3.22777318e-01,-8.08589980e-01,8.49914594e-01,4.35484754e-01,-1.40394082e+00,
1.48827264e+00,1.57212231e+00,3.83292223e-02,-6.25131577e-01,1.01682177e+00,
1.90594143e-01,-6.21391888e-01,2.42294856e-01,1.67681906e+00,}; 
k2c_tensor test8_input_1_input = {&test8_input_1_input_array[0],2,14,{ 1,14, 1, 1, 1}}; 
float keras_dense_1_test8_array[1] = {
-9.86113846e-02,}; 
k2c_tensor keras_dense_1_test8 = {&keras_dense_1_test8_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test8_array[1] = {0}; 
k2c_tensor c_dense_1_test8 = {&c_dense_1_test8_array[0],2,1,{1,1,1,1,1}}; 
float test9_input_1_input_array[14] = {
1.48233836e+00,-6.90920180e-02,1.95278817e+00,4.25105980e-02,-1.09403041e+00,
-1.42153804e+00,1.92081030e-01,1.96716775e-01,-3.44281458e-01,-1.67146470e+00,
1.66356859e+00,-8.79087277e-01,1.26824363e+00,3.76859025e-01,}; 
k2c_tensor test9_input_1_input = {&test9_input_1_input_array[0],2,14,{ 1,14, 1, 1, 1}}; 
float keras_dense_1_test9_array[1] = {
-8.57255831e-02,}; 
k2c_tensor keras_dense_1_test9 = {&keras_dense_1_test9_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test9_array[1] = {0}; 
k2c_tensor c_dense_1_test9 = {&c_dense_1_test9_array[0],2,1,{1,1,1,1,1}}; 
float test10_input_1_input_array[14] = {
-6.31484733e-01,-1.45275857e+00,1.29719668e+00,8.58356769e-01,-8.07825373e-02,
-4.14981788e-01,-5.83174203e-01,-1.14139502e+00,6.99948493e-01,1.50740530e+00,
7.65177966e-02,7.74826610e-01,1.28019964e-01,-6.55856457e-01,}; 
k2c_tensor test10_input_1_input = {&test10_input_1_input_array[0],2,14,{ 1,14, 1, 1, 1}}; 
float keras_dense_1_test10_array[1] = {
-2.08705850e-02,}; 
k2c_tensor keras_dense_1_test10 = {&keras_dense_1_test10_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test10_array[1] = {0}; 
k2c_tensor c_dense_1_test10 = {&c_dense_1_test10_array[0],2,1,{1,1,1,1,1}}; 
 float errors[10];
 size_t num_tests = 10; 
size_t num_outputs = 1; 
FRNN_0D_small_initialize(); 
FRNN_0D_small_reset_states();clock_t t0 = clock(); 
FRNN_0D_small(&test1_input_1_input,&c_dense_1_test1); 
FRNN_0D_small(&test2_input_1_input,&c_dense_1_test2); 
FRNN_0D_small(&test3_input_1_input,&c_dense_1_test3); 
FRNN_0D_small(&test4_input_1_input,&c_dense_1_test4); 
FRNN_0D_small(&test5_input_1_input,&c_dense_1_test5); 
FRNN_0D_small_reset_states();FRNN_0D_small(&test6_input_1_input,&c_dense_1_test6); 
FRNN_0D_small(&test7_input_1_input,&c_dense_1_test7); 
FRNN_0D_small(&test8_input_1_input,&c_dense_1_test8); 
FRNN_0D_small(&test9_input_1_input,&c_dense_1_test9); 
FRNN_0D_small(&test10_input_1_input,&c_dense_1_test10); 

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
FRNN_0D_small_terminate(); 
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

