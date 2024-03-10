#include <stdio.h>
#include<stdlib.h>
int main(){

    FILE *fptr=NULL;
    fptr = fopen("apple.txt","r");
    if(fptr==NULL)
    {
        printf("ERROR");
        exit(1);
    }
    char ch[50];
    //long int n;
    fscanf(fptr, "%s",ch);
    printf("character is : %s\n",ch);
    fscanf(fptr, "%s",ch);
    printf("character is : %s\n",ch);
     fscanf(fptr, "%s",ch);
    printf("character is : %s\n",ch);
    //fscanf(fptr, "%ld",&n);
    //printf("character is : %ld\n",n);

    fclose(fptr);
    
}