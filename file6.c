#include <stdio.h>
#include <string.h>

int main(){

    FILE *ptr;
    ptr = fopen("apple.txt","r");

    int n;
 
        fscanf(ptr,"%d",&n);
         printf("%d\n",n);
          fscanf(ptr,"%d",&n);
           printf("%d\n",n);
           fscanf(ptr,"%d",&n);
            printf("%d\n",n);
             fscanf(ptr,"%d",&n);
              printf("%d\n",n);
               fscanf(ptr,"%d",&n);
        printf("%d\n",n);
    

    

    fclose(ptr);
}