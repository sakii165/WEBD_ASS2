//write a function that prints namste if user is indian and bonjur if the user is french
#include <stdio.h>

void printns();
void printb();

int main()
{
    printf ("enter i for indian and f for french nationallity :");
    char c ;
    scanf("%s",&c);

    if(c == 'i')
    {
        printns();
    }

    if(c == 'f')
    {
        printb();
    }
    return 0;
}
void printns(){
    printf("NAMASTE ^");
}

void printb(){
    printf("BONJOUR ^");
}