#include <stdio.h>
#include <string.h>

int main(){
    char arr[50];
    int i,count=0;
    scanf("%s",arr);

    for(i=0;arr[i]!='\0';i++){
        count++;
    }
int sum=0,rem;
for(int i=0;i<count;i++)
{
   
    if(arr[i]=='I' && arr[i+1]=='V')
    rem=4;
    else if(arr[i]=='I' && arr[i+1]=='X')
    rem=9;
    else if(arr[i]=='I')
    rem=1;
    else if(arr[i]=='V')
    rem=5;
    else if(arr[i]=='X')
    rem=10;
    else if(arr[i]=='L')
    rem=50;
    else if(arr[i]=='C')
    rem=100;
    else if(arr[i]=='D')
    rem=500;
    else if(arr[i]=='M')
    rem=1000;
    sum+=rem;
}
    
     printf("%d",sum);

   

}