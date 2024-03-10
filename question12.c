//take a string input from user using %c

#include <stdio.h>
#include <string.h>

int main(){
    
    char str[100];
    char ch;
    int i = 0 ;
    while(ch != '\0' ){
        scanf("%c",str[i]);
        ch = str[i];
        i++;
    }
    str[i] = '\0';
    return 0 ;
}

