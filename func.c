// #include <stdio.h>

// int func(int a, int b);

// int main(void) {
// 	// your code goes here
// 	int a,b;
// 	printf("enter the numbers :");
// 	scanf("%d  %d",&a,&b);
	
// 	func(a ,b);
// 	return 0;
// }
 
//   int func(int a, int b){
//      int num1, num2;
     
//      num1 = a*a + 2*a*b + b*b;
//      num2 = a + b;
     
//      printf("%d \n %d", num1,num2);
     
//      return num1, num2; 
//  }


// #include <stdio.h>
//  int list_generator(int n);
// int main() {
//     int A, B;
//     scanf("%d", &A);
//     scanf("%d", &B);

//     list_generator(A);
//     list_generator(B);
    

//     return 0;
// }
//  int list_generator(int n){
//     int i=0;
//     for(int i=1; i<=n; i++){
//         printf("%d ", i);
//     }
//     printf("\n");
//     return 0;
// }
// #include <stdio.h>

// void compute_value(int A, int B) {
//     // update your code below this line
    
// }

// int main() {
//     int t=3;

//     for (int i = 0; i < t; i++) {
//         int A, B;
//         scanf("%d %d", &A, &B);
//         compute_value(A, B);
//     }

//     return 0;
// }
// void compute_value(int A, int B){
//    int result_1, result_2;
//    result_1 = A*A + 2*A*B + B*B ;
//    result_2 = A + B ;
   
//    printf("%d \n %d \n", result_1, result_2);
   
//    return;
// }
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
/* Declare variables and function prototypes. */
unsigned int seed;
int n, k;
double component_reliability, a_series, a_parallel,
series_success=0, parallel_success=0,
num1, num2, num3;
double rand_float(double a,double b);
/* Get information for the simulation. */
printf("Enter individual component reliability: \n");
scanf("%lf",&component_reliability);
printf("Enter number of trials: \n");
scanf("%i",&n);
printf("Enter unsigned integer seed: \n");
scanf("%u",&seed);
srand(seed);
printf("\n");
/* Compute analytical reliabilities. */
a_series = pow(component_reliability,3);
a_parallel = 3*component_reliability
- 3*pow(component_reliability,2)
+ pow(component_reliability,3);

for (k=1; k<=n; k++)
{
num1 = rand_float(0,1);
num2 = rand_float(0,1);
num3 = rand_float(0,1);
if (((num1<=component_reliability) &&
(num2<=component_reliability)) &&
(num3<=component_reliability))
series_success++;
if (((num1<=component_reliability) ||
(num2<=component_reliability)) ||
(num3<=component_reliability))
parallel_success++;

}
/* Print results. */
printf("Analytical Reliability \n");
printf("Series: %.3f Parallel: %.3f \n",
a_series,a_parallel);
printf("Simulation Reliability, %i trials \n",n);
printf("Series: %.3f Parallel: %.3f \n",
(double)series_success/n,
(double)parallel_success/n);
/* Exit program. */
return 0;
}

double rand_float(double a,double b)
{
return ((double)rand()/RAND_MAX)*(b-a) + a;
}
