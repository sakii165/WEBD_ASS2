#include <stdio.h>

void calculateprice(float value);

int main (){
    float value;
    printf("enter the value of product : ");
    scanf("%f", &value);

    calculateprice(value);

    return 0;

}

void calculateprice(float value){

    value = value + (0.18 * value);
    printf (" final price is %f \n", value);
}