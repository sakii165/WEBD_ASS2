#include <stdio.h>
int main (){

    int *ptr;
    ptr = (int *)calloc(5,sizeof(int));	// ptr = (int *)malloc(5*sizeof(int));

    // ptr[1]=3;
    // ptr[2] =4;
    // ptr[3]=4;
    // ptr[4]=5;
    // ptr[5]=8;

    // for(int i=0; i<5;i++){
    //     printf("%d\n",ptr[i]);
    // }
     ptr = (int*)realloc(ptr,8);
     for(int i=0; i<8;i++){
        printf("%d\n",ptr[i]);
    }

}



