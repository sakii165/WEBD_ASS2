#include <stdio.h>
#include <string.h>

int main(){

    FILE *p;
    p = fopen("apple.txt","r");

   // char ch[50];
   // printf("%s\n",fgets(ch,50,p));
     
    printf("%c\n",fgetc(p));
     printf("%c\n",fgetc(p));
      printf("%c\n",fgetc(p));
       printf("%c\n",fgetc(p));
        printf("%c\n",fgetc(p));
         printf("%c\n",fgetc(p));
          printf("%c\n",fgetc(p));
           printf("%c\n",fgetc(p));
            printf("%c\n",fgetc(p));

    fclose(p);
}