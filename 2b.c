#include <stdio.h>

 int sequence(int n){
 
  if(n==0)
  return 0;
 
  if(n==1)
  return 1;
 
  if(n==2)
  return 2;
 
  if(n>=3)
  return sequence(n-1)+sequence(n-2)+sequence(n-3);
 
  }
  int main(){

int a;
scanf("%d",&a);

printf("%d",sequence(a));
}