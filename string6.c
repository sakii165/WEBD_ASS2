#include <stdio.h>
#include <string.h>

int main (){

    // char oldstr[] = "sakshi" ;
    // char newstr[] = "devil" ;

    // strcpy(newstr ,oldstr);
    // puts(newstr);  //exchange value

    // char str1[] = "sakshi" ;
    // char str2[] = "devil" ;

    // strcat(str1,str2);
    // puts(str1);

    char str1[] = "sakshi" ;
    char str2[] = "devils" ;
                                        /*compares 2 strings and returns a value
                                        0___>equal string
                                        +ve__ str1>str2(ASCII)
                                        -ve__ str1,str2(ASCII) */
int diff = strcmp(str1,str2);

    printf("%d",diff);

    return 0 ;

}