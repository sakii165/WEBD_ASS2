#include <stdio.h>
#include <string.h>

int main (){
    int arr[50];
    int length,j;
    int a[50]=0;
    scanf("%c",arr);

  for(int i=0;arr[i]!='\n';i++){
    length = i+1;
  }
    printf("%d",length);

    for( j=0;j<length;j++){
        
        if(arr[j]==arr[j+1]);
        a[j]++;
    }
    int max;
    for(int j=0;j<length;j++){
    if(max<a[j])
        max=a[j] ;
   }

   printf("%d",a[j]);
}