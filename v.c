// #include <stdio.h>
// int main(){

//     for (int i =1 ;i<=6;i++)
//     {
//         for (int j=0; j<i;j++){
//             printf(" ");
//         }
//         printf("*");
//         printf("\n");
//     }
// }
#include <stdio.h>
int main(){
    
    int a,b,c;
    for(int i=0; i<6; i++){
     scanf("%d",&a);
     scanf("%d",&b); 
     scanf("%d",&c);
        
     int avg;
     avg = (a+b)/2;
     
     if(avg>c){
     printf("YES");

    }
    else{
    printf("NO");

     }
    
}
     
  return 0 ;
}




