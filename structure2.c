#include <stdio.h>
#include <string.h>

struct student{
    char name[100];
    int roll;
    float cgpa;
};

int main(){
    struct student cs[100];
    cs[0].roll = 255;
    cs[0].cgpa = 9.4;
    strcpy(cs[0].name , "sakshi");

    printf("%s\n", cs[0].name);


    struct student s1 = {"sakshi", 246, 8.5};
    struct student s2 = {"varun", 264, 6.7};

    printf("student roll no is : %d\n ", s1.roll);

    struct student *ptr = &s1;
     printf("student roll no with ptr is : %d\n ",(*ptr).roll );

     printf("student roll no with arrow operator is : %d\n ",ptr->roll );
      printf("student name with arrow operator is : %s\n ",ptr->name );
       printf("student cgpa with arrow operator is : %f\n ",ptr->cgpa );

    return 0 ;

}