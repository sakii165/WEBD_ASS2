#include <stdio.h>
#include <string.h>

int main(){
   
    char s[100];
    
    scanf("%s",s);

    int size = strlen(s);
   
    int r=0;
    
    for (int i = 1; i < size; i++)
        r = r*2 + (s[i] -'0');

      if(s[0] == '0')  
      printf("decimal number for give binary string is : %d",r);
      else
      printf("decimal number for give binary string is : -%d",r);


}