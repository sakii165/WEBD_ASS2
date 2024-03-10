//print hello 5 times using resursion

#include <stdio.h>

void printh(int n);
    
int main () {

printh(8);

    return 0;
}

void printh(int n){

    if (n==0){

        return ;
    }
    printf("hello :) \n");
    printh(n-1);
    //return 0;
}