#include<stdio.h>
int main(){

    char *canchange = "hello world" ;
    gets(canchange) ;

    canchange = "hello" ;
    gets(canchange);

    char cannotchange[] ="hello world" ;
    gets(cannotchange);
    cannotchange = "hello" ;
    gets(cannotchange);

    return 0 ;

}