//write a function to calculate area of a square, a rectangle, a circle

#include <stdio.h>

float squarearea(float side);
float rectanglearea(float l, float b);
float circlearea(float r);
 
int main (){

     int side;
    printf("enter the side of square :");
    scanf("%d",&side);

    float x=squarearea(side); 
    printf("%f\n",x);

    int l, b;
    printf("enter the length of rectangle : ");
    scanf("%d", &l);

    printf("enter the bredth of rectangle");
    scanf("%d", &b);

    float y=rectanglearea( l, b);
printf("%f\n",y);
    int r;
     printf("enter the radius of circle :");
    scanf("%d",&r);

   float z= circlearea( r);
printf("%f\n",z);
    return 0;
}

float squarearea(float side){

    return side * side ;
}

float rectanglearea(float l, float b){

return l * b ;

}

float circlearea(float r){

   return 3.14 * r * r ;
}