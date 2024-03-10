#include<stdio.h>

   // void printstring(char arr[] );

int main(){

   // char name[] = {'s', 'a', 'k', 's', 'h', 'i', '\0'} ;
   // char name[] = "sakshi" ;

   char firstname[] = "sakshi" ;
   char lastname[] = "mundhe" ;

//    printstring(firstname);
//    printstring(lastname);
   
//     return 0 ;
//     }


// void printstring(char arr []){

//     for(int i=0; arr[i] != '\0'; i++){
//         printf("%c", arr[i]);

//     }
//     printf("\n");

printf("%s\t%s", firstname , lastname);
return 0 ;
}