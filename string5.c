#include <stdio.h>

void countstring(char arr[]);

int main (){

    char name[100];
    printf("enter your name :");
    scanf("%s", name);
    //fgets(name, 100 , stdin);

   countstring(name);

   
    return 0 ;

}

void countstring(char arr[])
{
    int count = 0 ;
    for (int i=0; arr[i] != '\0'; i++)
    {
        count++ ;
    }

     printf("length of your name is %d", count);

}