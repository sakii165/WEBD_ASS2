// factorial of n

#include <stdio.h>

int factorial(int n);

int main (){

    printf("factorial is %d", factorial(9));

    return 0;
}

int factorial(int n){
 if (n == 1 || n == 0){

    return 1;
 }
    int fact1 = factorial(n-1);
    int fact = fact1 * n ;
}