#include <stdio.h> 
#include <math.h> 
#include <time.h> 
#include "./include/k2c_include.h" 
#include "FRNN_0D_12channels.h" 

float maxabs(k2c_tensor *tensor1, k2c_tensor *tensor2);
struct timeval GetTimeStamp(); 
 
int main(){
float test1_input_1_input_array[12] = {
-7.61331535e-02,-3.92247649e-01,-1.13350641e+00,-1.71021841e+00,6.01134142e-01,
-8.51123590e-01,1.06946179e+00,8.14373046e-01,-6.06260058e-01,1.18621887e+00,
5.64228186e-01,8.62716509e-01,}; 
k2c_tensor test1_input_1_input = {&test1_input_1_input_array[0],2,12,{ 1,12, 1, 1, 1}}; 
float keras_dense_1_test1_array[1] = {
-1.11723199e-01,}; 
k2c_tensor keras_dense_1_test1 = {&keras_dense_1_test1_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test1_array[1] = {0}; 
k2c_tensor c_dense_1_test1 = {&c_dense_1_test1_array[0],2,1,{1,1,1,1,1}}; 
float test2_input_1_input_array[12] = {
-1.35802963e-01,1.44057731e-01,-6.69718663e-01,1.77840336e+00,9.62441895e-01,
3.03911569e-01,-3.93345024e-02,8.86915906e-01,8.34611328e-01,-1.36891215e+00,
-2.85931276e-01,1.37131146e+00,}; 
k2c_tensor test2_input_1_input = {&test2_input_1_input_array[0],2,12,{ 1,12, 1, 1, 1}}; 
float keras_dense_1_test2_array[1] = {
-2.67226189e-01,}; 
k2c_tensor keras_dense_1_test2 = {&keras_dense_1_test2_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test2_array[1] = {0}; 
k2c_tensor c_dense_1_test2 = {&c_dense_1_test2_array[0],2,1,{1,1,1,1,1}}; 
float test3_input_1_input_array[12] = {
5.45637186e-01,1.05041913e+00,-1.31127194e+00,-2.66242520e-02,-5.89829186e-01,
-4.65992750e-01,-1.32551550e-01,1.03003644e+00,1.10192363e+00,-6.62311656e-02,
-6.29548819e-01,-5.97740656e-01,}; 
k2c_tensor test3_input_1_input = {&test3_input_1_input_array[0],2,12,{ 1,12, 1, 1, 1}}; 
float keras_dense_1_test3_array[1] = {
-3.94436926e-01,}; 
k2c_tensor keras_dense_1_test3 = {&keras_dense_1_test3_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test3_array[1] = {0}; 
k2c_tensor c_dense_1_test3 = {&c_dense_1_test3_array[0],2,1,{1,1,1,1,1}}; 
float test4_input_1_input_array[12] = {
-1.41293090e+00,1.58091387e+00,-3.51781600e-01,-3.88124250e-01,3.72617082e-02,
-9.79533077e-01,-6.95418429e-01,-1.20704299e+00,1.52707792e+00,-2.87028044e-01,
1.42774222e+00,4.71906195e-03,}; 
k2c_tensor test4_input_1_input = {&test4_input_1_input_array[0],2,12,{ 1,12, 1, 1, 1}}; 
float keras_dense_1_test4_array[1] = {
-4.35282141e-01,}; 
k2c_tensor keras_dense_1_test4 = {&keras_dense_1_test4_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test4_array[1] = {0}; 
k2c_tensor c_dense_1_test4 = {&c_dense_1_test4_array[0],2,1,{1,1,1,1,1}}; 
float test5_input_1_input_array[12] = {
1.57126271e+00,-1.78355917e+00,1.12605776e+00,-1.00482655e+00,-1.07980358e+00,
1.43752803e+00,1.01441286e+00,-1.72260847e-01,1.29240155e+00,1.88045397e+00,
1.00784099e+00,1.17963349e+00,}; 
k2c_tensor test5_input_1_input = {&test5_input_1_input_array[0],2,12,{ 1,12, 1, 1, 1}}; 
float keras_dense_1_test5_array[1] = {
-5.40399790e-01,}; 
k2c_tensor keras_dense_1_test5 = {&keras_dense_1_test5_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test5_array[1] = {0}; 
k2c_tensor c_dense_1_test5 = {&c_dense_1_test5_array[0],2,1,{1,1,1,1,1}}; 
float test6_input_1_input_array[12] = {
-3.90562833e-01,-1.18106934e+00,2.94249418e-01,-6.63492451e-01,-6.32021625e-01,
1.65155481e+00,-2.72128915e-01,5.27915441e-01,7.13123783e-02,1.60563395e-01,
-1.10988000e+00,5.67058970e-01,}; 
k2c_tensor test6_input_1_input = {&test6_input_1_input_array[0],2,12,{ 1,12, 1, 1, 1}}; 
float keras_dense_1_test6_array[1] = {
-8.40058625e-02,}; 
k2c_tensor keras_dense_1_test6 = {&keras_dense_1_test6_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test6_array[1] = {0}; 
k2c_tensor c_dense_1_test6 = {&c_dense_1_test6_array[0],2,1,{1,1,1,1,1}}; 
float test7_input_1_input_array[12] = {
-1.94337922e+00,-1.70928858e+00,7.72849993e-01,-8.04524360e-01,-1.68812947e+00,
3.11562032e-01,-1.98678101e+00,-9.34853181e-01,1.24417312e+00,1.93540514e+00,
3.50749065e-01,1.66479733e+00,}; 
k2c_tensor test7_input_1_input = {&test7_input_1_input_array[0],2,12,{ 1,12, 1, 1, 1}}; 
float keras_dense_1_test7_array[1] = {
3.92885134e-03,}; 
k2c_tensor keras_dense_1_test7 = {&keras_dense_1_test7_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test7_array[1] = {0}; 
k2c_tensor c_dense_1_test7 = {&c_dense_1_test7_array[0],2,1,{1,1,1,1,1}}; 
float test8_input_1_input_array[12] = {
-1.58427791e+00,1.78305319e+00,5.33066056e-02,-1.45832579e-01,-1.82632498e+00,
-4.91275724e-01,-7.29509817e-01,-1.85428682e+00,-7.47234546e-01,-1.41735705e+00,
-1.51263099e-01,6.97799542e-01,}; 
k2c_tensor test8_input_1_input = {&test8_input_1_input_array[0],2,12,{ 1,12, 1, 1, 1}}; 
float keras_dense_1_test8_array[1] = {
1.44644722e-01,}; 
k2c_tensor keras_dense_1_test8 = {&keras_dense_1_test8_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test8_array[1] = {0}; 
k2c_tensor c_dense_1_test8 = {&c_dense_1_test8_array[0],2,1,{1,1,1,1,1}}; 
float test9_input_1_input_array[12] = {
-1.53788601e+00,-1.87092732e+00,-2.07502870e-01,1.20568805e+00,-1.30539260e+00,
-1.06691795e+00,-5.68485386e-01,9.02318966e-01,-3.79642099e-01,1.33858016e+00,
5.71928512e-01,1.20681155e+00,}; 
k2c_tensor test9_input_1_input = {&test9_input_1_input_array[0],2,12,{ 1,12, 1, 1, 1}}; 
float keras_dense_1_test9_array[1] = {
2.42705956e-01,}; 
k2c_tensor keras_dense_1_test9 = {&keras_dense_1_test9_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test9_array[1] = {0}; 
k2c_tensor c_dense_1_test9 = {&c_dense_1_test9_array[0],2,1,{1,1,1,1,1}}; 
float test10_input_1_input_array[12] = {
-2.39608998e-01,1.97221197e+00,-8.52729733e-01,1.41766629e+00,-6.66690480e-02,
1.73805785e+00,7.49811435e-01,3.65551131e-01,1.15277697e+00,-1.09777561e+00,
7.94431891e-01,-6.42228181e-02,}; 
k2c_tensor test10_input_1_input = {&test10_input_1_input_array[0],2,12,{ 1,12, 1, 1, 1}}; 
float keras_dense_1_test10_array[1] = {
5.63452803e-02,}; 
k2c_tensor keras_dense_1_test10 = {&keras_dense_1_test10_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test10_array[1] = {0}; 
k2c_tensor c_dense_1_test10 = {&c_dense_1_test10_array[0],2,1,{1,1,1,1,1}}; 
 float errors[10];
 size_t num_tests = 10; 
size_t num_outputs = 1; 
FRNN_0D_12channels_initialize(); 
FRNN_0D_12channels_reset_states();clock_t t0 = clock(); 
FRNN_0D_12channels(&test1_input_1_input,&c_dense_1_test1); 
FRNN_0D_12channels(&test2_input_1_input,&c_dense_1_test2); 
FRNN_0D_12channels(&test3_input_1_input,&c_dense_1_test3); 
FRNN_0D_12channels(&test4_input_1_input,&c_dense_1_test4); 
FRNN_0D_12channels(&test5_input_1_input,&c_dense_1_test5); 
FRNN_0D_12channels_reset_states();FRNN_0D_12channels(&test6_input_1_input,&c_dense_1_test6); 
FRNN_0D_12channels(&test7_input_1_input,&c_dense_1_test7); 
FRNN_0D_12channels(&test8_input_1_input,&c_dense_1_test8); 
FRNN_0D_12channels(&test9_input_1_input,&c_dense_1_test9); 
FRNN_0D_12channels(&test10_input_1_input,&c_dense_1_test10); 

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
FRNN_0D_12channels_terminate(); 
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

