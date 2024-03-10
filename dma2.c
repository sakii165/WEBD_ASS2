#include <stdio.h>
int main (){

    int *ptr;
    // ptr = (int *)calloc(5,sizeof(int));	
     ptr = (int *)malloc(5*sizeof(int));

    // ptr[1]=3;
    // ptr[2] =4;
    // ptr[3]=4;
    // ptr[4]=5;
    // ptr[5]=8;
    printf("enter 5 numbers:");

    for(int i=0; i<5;i++){
        scanf("%d\n",&ptr[i]);
       
    }
    for(int i=0; i<5;i++){
        printf("%d\n",ptr[i]);
       
    }
       
    
    

    // free(ptr);
    // ptr = (int *)malloc(8*sizeof(int));
    
    //  for(int i=0; i<8;i++){
    //     printf("%d\n",ptr[i]);
    // }
}



