//write a program to enter price of 3 times & print their final cost with gst

#include <stdio.h>

int main (){

    float price[3];
    printf("enter 3 prices :"); 
    scanf("%f",&price[0]);
    scanf("%f",&price[1]);
    scanf("%f",&price[2]);

    printf("total price 1 : %f ",price[0] +( price[0] * 0.18 ));
    printf("total price 2 : %f ",price[1] +( price[1] * 0.18 ));
    printf("total price 13: %f ",price[2] +( price[2] * 0.18 ));

    return 0;


}