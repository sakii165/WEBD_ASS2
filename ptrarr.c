#include <stdio.h>
int main(){

    int adhaar[5];
    //input

    int *ptr = &adhaar[0];
    for (int i=0; i<5; i++){

        printf(" index %d :", i);
        scanf("%d", (ptr +i ));
    }

    //output
    for(int i = 0; i<5; i++){
        printf("index %d = %d\n ",i , *(ptr + i));

    }

    return 0;
}
