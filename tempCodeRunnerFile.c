#include <stdio.h>
#include <string.h>

int main(){
   
    char s[100];
    scanf("%s",s);

    int size = strlen(s);
    for (int i = 0; i < size; i++)
    {
       if(s[i] == '0')
       printf("1");

        if(s[i] == '1')
        printf("0");
    }