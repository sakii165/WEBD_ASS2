// write a function to convert celsius to fahrnheit

#include <stdio.h>

float temp(float value);

int main (){


float ff;
printf("enter the value");
scanf("%f",&ff);
float val=temp(ff);
printf("\n%f",val);
    return 0;
}
float temp(float value){

    float f = value * (9/5) + 32 ;
    printf("%f and", f);
    return f;

}