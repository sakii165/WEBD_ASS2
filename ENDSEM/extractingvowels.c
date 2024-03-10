#include <stdio.h>
#include <string.h>

int main (){

    int n;
    char arr[50];
    char v[5] = {'a','e','i','o','u'};
    int c[5] ={0,0,0,0,0};

    scanf("%s",arr);

    for(int i=0 ; arr[i]!='\0' ; i++){
        n=i+1;
    }printf("%d\n",n);

    for(int i=0;i<n;i++){
       for(int j=0;j<5;j++) {
        if(arr[i] == v[j])
       c[j]++;
    }
    }
      for(int k=0;k<5;k++){
       printf("number of %c is : %d\n",v[k],c[k]);
      }
    

    return 0 ;

}