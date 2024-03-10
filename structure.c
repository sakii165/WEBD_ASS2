#include <stdio.h>
#include <string.h>

struct student{
    char name[100];
    int roll;
    float cgpa;
};

int main(){

    struct student bio;
    bio.roll = 2023255;
    bio.cgpa = 9.6;
    //bio.name = "sakshi"
    strcpy(bio.name, "sakshi");

    printf("your name is %s\n", bio.name);
    printf("your roll number is %d\n", bio.roll);
    printf("you got %f cgpa", bio.cgpa);

    struct student bio2;
    bio2.roll = 2023256;
    bio2.cgpa = 9.5;
    //bio.name = "sakshi"
    strcpy(bio2.name, "anjali");

    printf("your name is %s\n", bio2.name);
    printf("your roll number is %d\n", bio2.roll);
    printf("you got %f cgpa", bio2.cgpa);


    return 0 ;
}