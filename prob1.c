//program to count the number of elements in array that are divisible by 2 or 3 but not both
// #include <stdio.h>

// int main(){
//     int n;
//     printf("enter the number of elements in array :");
//     scanf("%d",&n);

//     int arr[n];
//     for(int i=0; i<n; i++){
//         printf("enter the element :");
//         scanf("%d", &arr[i]);
//     }

//     int count=0;
//     int count2=0;
//     for(int i=0; i<n; i++)
//     {
//         if((arr[i]) % 2 == 0 ||(arr[i]) % 3 == 0 )
//         {
//             count++;
//         }
        
//         if((arr[i]) % 2 == 0 && (arr[i]) % 3 == 0 ){
//             count2--;

//         }
//     }
//     printf("%d",count + count2);

//     return 0;
// }
#include <stdio.h>

int main(){
    int n;
    printf("the number of elements in array :  ");
    scanf("%d",&n);
int f=0;
    int arr[n];
   for(int i=0; i<n; i++)
    {
        
     scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++){
        f=0;
    for(int j=0; j<n; j++){

        if((arr[i] == arr[j])&&(i!=j)){
            f=1;
            break;
        }
    }
if(f==0)
printf("%d",arr[i]);
}

    
return 0;

}