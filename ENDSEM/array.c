#include <stdio.h>
#include <string.h>

int main(){
    char arr[50];
    int n = 0;
    scanf("%s",arr);

    for(int i=0; arr[i]!='\0'; i++){
        n=i;
    }
   int flag = 0;
    for(int i=0; arr[i]!='\0'; i++){
        if(arr[i] == arr[n-i]);
       
     flag=1;   
    }
    printf("YES");
    if(flag==0)
    printf("NO");
   

    return 0 ;
}

// #include <stdio.h>
// #include <stdlib.h>

// int main (){

// int n;
// scanf("%d",&n);
//     int *ptr;
//     ptr = (int *)malloc(n*sizeof(int));

//     for(int i=0; i<n; i++){
//         scanf("%d",&ptr[i]);

//     }
//     printf("squence is :");

//     for(int i=0; i<n; i++){
//     printf("%d ",ptr[i]);}
//     printf("\n");

//     int max=ptr[0],min=ptr[0];
//     for(int j=1;j<n;j++){
//         if(max<ptr[j])
//         max = ptr[j];
//     }
//     printf("maximum is :%d\n",max);

//     for(int k=1;k<n;k++){
//         if(min>ptr[k])
//         min = ptr[k];
//     }
//     printf("miniumum is :%d\n",min);

//     free(ptr);
//     int new_size;
//     scanf("%d",&new_size);

//     ptr = (int *)malloc(new_size *sizeof(int));
    

// }