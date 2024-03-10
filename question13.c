//find salted form of a password entered by user if salt is 123 &added at the end

#include <stdio.h>
#include <string.h>

int main(){
     
 char u_pass[100];
 printf("enter your password :");
 scanf("%s", u_pass);

 char new_pass[100] = "123" ;
 printf("salted form is : %s",strcat(u_pass,new_pass));


   return 0 ;

}