#include <stdio.h> 
#include <math.h> 
#include <time.h> 
#include "./include/k2c_include.h" 
#include "FRNN_re.h" 

float maxabs(k2c_tensor *tensor1, k2c_tensor *tensor2);
struct timeval GetTimeStamp(); 
 
int main(){
float test1_input_1_input_array[14] = {
9.00075156e-01,1.47672494e+00,9.23832861e-02,-1.68910362e+00,1.69121866e+00,
1.93880639e+00,5.41587095e-01,1.74135520e+00,-1.97518844e+00,7.12550335e-01,
1.05096173e+00,-6.40484732e-01,-4.59302083e-01,-1.10496733e-01,}; 
k2c_tensor test1_input_1_input = {&test1_input_1_input_array[0],2,14,{ 1,14, 1, 1, 1}}; 
float keras_dense_1_test1_array[1] = {
-2.20015988e-01,}; 
k2c_tensor keras_dense_1_test1 = {&keras_dense_1_test1_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test1_array[1] = {0}; 
k2c_tensor c_dense_1_test1 = {&c_dense_1_test1_array[0],2,1,{1,1,1,1,1}}; 
float test2_input_1_input_array[14] = {
4.34966845e-01,-1.66935057e+00,-7.28161146e-01,6.61399300e-01,-2.25642434e-01,
-1.47870912e+00,9.94574031e-01,-8.39042203e-01,1.27555666e+00,1.42056519e+00,
6.61863943e-01,-1.33926473e+00,-1.19320877e+00,1.78703664e-01,}; 
k2c_tensor test2_input_1_input = {&test2_input_1_input_array[0],2,14,{ 1,14, 1, 1, 1}}; 
float keras_dense_1_test2_array[1] = {
-1.12634338e-01,}; 
k2c_tensor keras_dense_1_test2 = {&keras_dense_1_test2_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test2_array[1] = {0}; 
k2c_tensor c_dense_1_test2 = {&c_dense_1_test2_array[0],2,1,{1,1,1,1,1}}; 
float test3_input_1_input_array[14] = {
1.74150973e+00,1.38930266e+00,-1.28173503e+00,1.69706817e-01,1.41170720e+00,
-9.55852451e-01,9.92275705e-01,1.94751296e+00,6.27868653e-01,9.28434756e-01,
-6.42361843e-01,-1.01329323e+00,-1.52189797e+00,-7.94410697e-01,}; 
k2c_tensor test3_input_1_input = {&test3_input_1_input_array[0],2,14,{ 1,14, 1, 1, 1}}; 
float keras_dense_1_test3_array[1] = {
-5.88836782e-02,}; 
k2c_tensor keras_dense_1_test3 = {&keras_dense_1_test3_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test3_array[1] = {0}; 
k2c_tensor c_dense_1_test3 = {&c_dense_1_test3_array[0],2,1,{1,1,1,1,1}}; 
float test4_input_1_input_array[14] = {
-1.98836757e+00,-1.12227308e+00,8.70834423e-02,1.87108448e+00,1.11144478e+00,
1.00370232e+00,-1.14097995e+00,-1.96271239e+00,-1.83325387e+00,-2.11676454e-01,
-6.63430544e-02,-5.97892386e-02,-1.13982876e+00,5.15511349e-01,}; 
k2c_tensor test4_input_1_input = {&test4_input_1_input_array[0],2,14,{ 1,14, 1, 1, 1}}; 
float keras_dense_1_test4_array[1] = {
-5.55798449e-02,}; 
k2c_tensor keras_dense_1_test4 = {&keras_dense_1_test4_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test4_array[1] = {0}; 
k2c_tensor c_dense_1_test4 = {&c_dense_1_test4_array[0],2,1,{1,1,1,1,1}}; 
float test5_input_1_input_array[14] = {
1.59446487e+00,2.44749065e-02,1.49184142e+00,-1.56836955e+00,1.30198228e+00,
-1.55543295e+00,-6.27195047e-01,4.04993061e-01,1.86048252e+00,1.54709475e+00,
1.37891825e-01,2.20950244e-01,-1.02310507e+00,-5.28896023e-01,}; 
k2c_tensor test5_input_1_input = {&test5_input_1_input_array[0],2,14,{ 1,14, 1, 1, 1}}; 
float keras_dense_1_test5_array[1] = {
-7.81124905e-02,}; 
k2c_tensor keras_dense_1_test5 = {&keras_dense_1_test5_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test5_array[1] = {0}; 
k2c_tensor c_dense_1_test5 = {&c_dense_1_test5_array[0],2,1,{1,1,1,1,1}}; 
float test6_input_1_input_array[14] = {
-1.62431883e+00,2.19943078e-01,-4.22869611e-01,-1.13316179e+00,8.66890482e-01,
-1.43674012e+00,3.02746238e-01,1.90775811e+00,-1.93362445e+00,-1.20664922e+00,
1.02161832e+00,-1.60032248e-01,-1.02629763e+00,-9.42121046e-01,}; 
k2c_tensor test6_input_1_input = {&test6_input_1_input_array[0],2,14,{ 1,14, 1, 1, 1}}; 
float keras_dense_1_test6_array[1] = {
1.74240842e-02,}; 
k2c_tensor keras_dense_1_test6 = {&keras_dense_1_test6_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test6_array[1] = {0}; 
k2c_tensor c_dense_1_test6 = {&c_dense_1_test6_array[0],2,1,{1,1,1,1,1}}; 
float test7_input_1_input_array[14] = {
-1.33387502e+00,1.21131422e+00,-2.16262987e-02,-7.01372918e-01,3.69979354e-01,
-9.76503154e-01,4.50228574e-01,1.94224143e+00,-7.59234732e-01,3.60565878e-01,
-1.80705146e-03,1.67942883e+00,-5.95059684e-01,-1.99909282e-01,}; 
k2c_tensor test7_input_1_input = {&test7_input_1_input_array[0],2,14,{ 1,14, 1, 1, 1}}; 
float keras_dense_1_test7_array[1] = {
4.23918925e-02,}; 
k2c_tensor keras_dense_1_test7 = {&keras_dense_1_test7_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test7_array[1] = {0}; 
k2c_tensor c_dense_1_test7 = {&c_dense_1_test7_array[0],2,1,{1,1,1,1,1}}; 
float test8_input_1_input_array[14] = {
1.62090681e+00,-9.10647524e-01,-9.80316189e-01,4.65237526e-01,5.45787359e-01,
3.91710360e-01,-1.37404056e+00,-1.12070139e+00,1.17045931e+00,-1.05779860e+00,
1.67808833e+00,-1.62620597e+00,7.10256542e-01,6.44541913e-01,}; 
k2c_tensor test8_input_1_input = {&test8_input_1_input_array[0],2,14,{ 1,14, 1, 1, 1}}; 
float keras_dense_1_test8_array[1] = {
-7.04070404e-02,}; 
k2c_tensor keras_dense_1_test8 = {&keras_dense_1_test8_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test8_array[1] = {0}; 
k2c_tensor c_dense_1_test8 = {&c_dense_1_test8_array[0],2,1,{1,1,1,1,1}}; 
float test9_input_1_input_array[14] = {
7.38445105e-01,-2.07787555e-01,-1.13566916e+00,2.56582172e-01,7.69221328e-01,
1.75545588e+00,1.54827675e+00,-7.16269171e-01,-7.40792027e-01,-1.27053803e+00,
7.32296605e-01,1.79325987e-01,-2.36647804e-01,1.73839339e+00,}; 
k2c_tensor test9_input_1_input = {&test9_input_1_input_array[0],2,14,{ 1,14, 1, 1, 1}}; 
float keras_dense_1_test9_array[1] = {
-2.05793798e-01,}; 
k2c_tensor keras_dense_1_test9 = {&keras_dense_1_test9_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test9_array[1] = {0}; 
k2c_tensor c_dense_1_test9 = {&c_dense_1_test9_array[0],2,1,{1,1,1,1,1}}; 
float test10_input_1_input_array[14] = {
6.17749816e-01,-1.44897772e+00,-1.26128199e+00,6.19847888e-01,1.18382554e+00,
1.18916971e+00,-1.10767444e+00,-8.04196926e-01,1.44122224e+00,-1.38568987e+00,
3.97651065e-01,-1.12090325e+00,1.19926247e-01,4.32695430e-01,}; 
k2c_tensor test10_input_1_input = {&test10_input_1_input_array[0],2,14,{ 1,14, 1, 1, 1}}; 
float keras_dense_1_test10_array[1] = {
-1.69304982e-01,}; 
k2c_tensor keras_dense_1_test10 = {&keras_dense_1_test10_array[0],2,1,{1,1,1,1,1}}; 
float c_dense_1_test10_array[1] = {0}; 
k2c_tensor c_dense_1_test10 = {&c_dense_1_test10_array[0],2,1,{1,1,1,1,1}}; 
 float errors[10];
 size_t num_tests = 10; 
size_t num_outputs = 1; 
FRNN_re_initialize(); 
FRNN_re_reset_states();clock_t t0 = clock(); 
FRNN_re(&test1_input_1_input,&c_dense_1_test1); 
FRNN_re(&test2_input_1_input,&c_dense_1_test2); 
FRNN_re(&test3_input_1_input,&c_dense_1_test3); 
FRNN_re(&test4_input_1_input,&c_dense_1_test4); 
FRNN_re(&test5_input_1_input,&c_dense_1_test5); 
FRNN_re_reset_states();FRNN_re(&test6_input_1_input,&c_dense_1_test6); 
FRNN_re(&test7_input_1_input,&c_dense_1_test7); 
FRNN_re(&test8_input_1_input,&c_dense_1_test8); 
FRNN_re(&test9_input_1_input,&c_dense_1_test9); 
FRNN_re(&test10_input_1_input,&c_dense_1_test10); 

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
FRNN_re_terminate(); 
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

