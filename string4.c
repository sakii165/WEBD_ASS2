#include <stdio.h>
#include <string.h>

int main (){
    char name[100];
    printf("enter your name :");
    scanf("%s", name);

    int length = strlen(name);
    printf("letters in your name are : %d", length);

    return 0 ;

}