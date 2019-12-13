#include <stdio.h> 
#include <math.h> 
#include <time.h> 
#include "./include/k2c_include.h" 
#include "FRNN0D.h" 

float maxabs(k2c_tensor *tensor1, k2c_tensor *tensor2);
struct timeval GetTimeStamp(); 
 
int main(){
float test1_input_1_input_array[14] = {
-4.42376722e-01,-1.10086705e+00,-4.58657361e-01,1.33289646e+00,1.37754605e+00,
-1.37943749e+00,-6.40091289e-01,-1.48125581e+00,8.72194877e-01,4.74641419e-01,
-6.80942504e-01,1.21856328e+00,-8.91413126e-01,-1.91617779e+00,}; 
k2c_tensor test1_input_1_input = {&test1_input_1_input_array[0],2,14,{ 1,14, 1, 1, 1}}; 
float keras_dense_1_test1_array[1] = {
-3.15541448e-03,}; 
k2c_tensor keras_dense_1_test1 = {&keras_dense_1_test1_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test1_array[1] = {0}; 
k2c_tensor c_dense_1_test1 = {&c_dense_1_test1_array[0],2,1,{1,1,1,1,1}}; 
float test2_input_1_input_array[14] = {
-1.44499614e+00,-1.12542316e+00,9.79409152e-01,1.85773704e-01,-1.24997200e+00,
3.79416736e-01,5.69206848e-01,1.28111086e+00,-2.13058893e-01,-1.06221796e+00,
-9.59377846e-02,-1.38507429e+00,-1.26610178e+00,-1.58654951e+00,}; 
k2c_tensor test2_input_1_input = {&test2_input_1_input_array[0],2,14,{ 1,14, 1, 1, 1}}; 
float keras_dense_1_test2_array[1] = {
4.18471247e-02,}; 
k2c_tensor keras_dense_1_test2 = {&keras_dense_1_test2_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test2_array[1] = {0}; 
k2c_tensor c_dense_1_test2 = {&c_dense_1_test2_array[0],2,1,{1,1,1,1,1}}; 
float test3_input_1_input_array[14] = {
-9.76530634e-01,-1.70479824e+00,-1.68386654e+00,-1.19060956e+00,3.67201547e-01,
1.35331914e+00,1.26543766e-01,-4.81573958e-02,7.21225042e-01,6.64524482e-01,
-9.35513136e-01,8.89653634e-01,-1.14823534e+00,-4.79082984e-01,}; 
k2c_tensor test3_input_1_input = {&test3_input_1_input_array[0],2,14,{ 1,14, 1, 1, 1}}; 
float keras_dense_1_test3_array[1] = {
8.83938521e-02,}; 
k2c_tensor keras_dense_1_test3 = {&keras_dense_1_test3_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test3_array[1] = {0}; 
k2c_tensor c_dense_1_test3 = {&c_dense_1_test3_array[0],2,1,{1,1,1,1,1}}; 
float test4_input_1_input_array[14] = {
1.12826843e+00,1.13941822e+00,1.77304482e+00,1.28263708e+00,6.71452684e-01,
-1.94239228e+00,6.69220724e-01,-1.87494178e+00,3.36396079e-01,-4.43637274e-01,
-4.13688662e-01,-1.24335604e+00,1.23779697e+00,-1.73515687e+00,}; 
k2c_tensor test4_input_1_input = {&test4_input_1_input_array[0],2,14,{ 1,14, 1, 1, 1}}; 
float keras_dense_1_test4_array[1] = {
8.05570856e-02,}; 
k2c_tensor keras_dense_1_test4 = {&keras_dense_1_test4_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test4_array[1] = {0}; 
k2c_tensor c_dense_1_test4 = {&c_dense_1_test4_array[0],2,1,{1,1,1,1,1}}; 
float test5_input_1_input_array[14] = {
-7.85621464e-01,8.82568084e-01,1.81899323e+00,-1.64153486e+00,1.33611695e+00,
1.52307998e+00,-3.91355332e-01,1.21837459e-01,-2.35954441e-01,7.49552286e-01,
-1.84007093e-01,2.91903855e-02,-3.19387284e-01,6.14836338e-01,}; 
k2c_tensor test5_input_1_input = {&test5_input_1_input_array[0],2,14,{ 1,14, 1, 1, 1}}; 
float keras_dense_1_test5_array[1] = {
5.27869463e-02,}; 
k2c_tensor keras_dense_1_test5 = {&keras_dense_1_test5_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test5_array[1] = {0}; 
k2c_tensor c_dense_1_test5 = {&c_dense_1_test5_array[0],2,1,{1,1,1,1,1}}; 
float test6_input_1_input_array[14] = {
5.55917768e-01,-9.79705033e-01,-8.82391445e-01,1.78549680e+00,-1.02792021e+00,
-1.03574376e+00,3.17495680e-01,6.37703937e-01,-1.30103986e+00,-3.93835116e-01,
-4.48448353e-01,5.10805630e-01,-1.47997855e+00,9.56427501e-01,}; 
k2c_tensor test6_input_1_input = {&test6_input_1_input_array[0],2,14,{ 1,14, 1, 1, 1}}; 
float keras_dense_1_test6_array[1] = {
-1.94242112e-02,}; 
k2c_tensor keras_dense_1_test6 = {&keras_dense_1_test6_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test6_array[1] = {0}; 
k2c_tensor c_dense_1_test6 = {&c_dense_1_test6_array[0],2,1,{1,1,1,1,1}}; 
float test7_input_1_input_array[14] = {
3.52825477e-01,-2.50429895e-01,7.63589261e-01,1.88862145e+00,1.32535365e-01,
-4.98681179e-01,1.59690617e+00,5.09963176e-01,1.77874292e+00,-8.39491636e-01,
-3.05719413e-01,1.77235834e-01,5.30105582e-01,1.07166599e+00,}; 
k2c_tensor test7_input_1_input = {&test7_input_1_input_array[0],2,14,{ 1,14, 1, 1, 1}}; 
float keras_dense_1_test7_array[1] = {
-4.23727259e-02,}; 
k2c_tensor keras_dense_1_test7 = {&keras_dense_1_test7_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test7_array[1] = {0}; 
k2c_tensor c_dense_1_test7 = {&c_dense_1_test7_array[0],2,1,{1,1,1,1,1}}; 
float test8_input_1_input_array[14] = {
1.05590824e+00,8.56925894e-01,-8.24835815e-03,-8.76333306e-01,-7.23403304e-01,
2.20249421e-01,-1.14260282e+00,7.19768096e-01,-4.80575693e-01,8.64474163e-02,
-1.42141796e+00,9.31122073e-01,1.29917564e+00,1.12145930e+00,}; 
k2c_tensor test8_input_1_input = {&test8_input_1_input_array[0],2,14,{ 1,14, 1, 1, 1}}; 
float keras_dense_1_test8_array[1] = {
-6.45984560e-02,}; 
k2c_tensor keras_dense_1_test8 = {&keras_dense_1_test8_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test8_array[1] = {0}; 
k2c_tensor c_dense_1_test8 = {&c_dense_1_test8_array[0],2,1,{1,1,1,1,1}}; 
float test9_input_1_input_array[14] = {
-8.31432804e-01,5.36485641e-01,4.47133712e-01,8.83373712e-01,-2.47217063e-01,
-7.19251064e-02,-8.18105260e-01,4.96420743e-01,-4.72464573e-01,1.68999267e+00,
1.46994385e+00,1.78488113e+00,5.72658191e-01,1.04035051e-01,}; 
k2c_tensor test9_input_1_input = {&test9_input_1_input_array[0],2,14,{ 1,14, 1, 1, 1}}; 
float keras_dense_1_test9_array[1] = {
-8.84115398e-02,}; 
k2c_tensor keras_dense_1_test9 = {&keras_dense_1_test9_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test9_array[1] = {0}; 
k2c_tensor c_dense_1_test9 = {&c_dense_1_test9_array[0],2,1,{1,1,1,1,1}}; 
float test10_input_1_input_array[14] = {
-9.19675501e-01,-4.22160456e-01,1.63653476e+00,-9.86856689e-01,-4.80582703e-01,
1.80739327e+00,-5.79867903e-01,1.25359249e+00,1.52195226e+00,1.83925386e+00,
-1.21568025e+00,-7.69484635e-01,-1.68804417e+00,1.72397994e+00,}; 
k2c_tensor test10_input_1_input = {&test10_input_1_input_array[0],2,14,{ 1,14, 1, 1, 1}}; 
float keras_dense_1_test10_array[1] = {
-7.37233162e-02,}; 
k2c_tensor keras_dense_1_test10 = {&keras_dense_1_test10_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test10_array[1] = {0}; 
k2c_tensor c_dense_1_test10 = {&c_dense_1_test10_array[0],2,1,{1,1,1,1,1}}; 
 float errors[10];
 size_t num_tests = 10; 
size_t num_outputs = 1; 
FRNN0D_initialize(); 
FRNN0D_reset_states();clock_t t0 = clock(); 
FRNN0D(&test1_input_1_input,&c_dense_1_test1); 
FRNN0D(&test2_input_1_input,&c_dense_1_test2); 
FRNN0D(&test3_input_1_input,&c_dense_1_test3); 
FRNN0D(&test4_input_1_input,&c_dense_1_test4); 
FRNN0D(&test5_input_1_input,&c_dense_1_test5); 
FRNN0D_reset_states();FRNN0D(&test6_input_1_input,&c_dense_1_test6); 
FRNN0D(&test7_input_1_input,&c_dense_1_test7); 
FRNN0D(&test8_input_1_input,&c_dense_1_test8); 
FRNN0D(&test9_input_1_input,&c_dense_1_test9); 
FRNN0D(&test10_input_1_input,&c_dense_1_test10); 

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
FRNN0D_terminate(); 
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

