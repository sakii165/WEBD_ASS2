#include <stdio.h>

int main()
{

    int n;
    printf("steps to reach top :");
    scanf("%d",&n);

    for(int i=1; i<n; i++)
    {
        int count = 0;
        for(int j=1; j<n; j++)
        {
             
           while(n = i + j)
           {
            
            count++;
            
           } 

        }
         printf("%d",count);
    }
  

    return 0;
}
// #include <stdio.h>
// int main()
//  {
//     int n;
//  printf("steps to reach top :");
//     scanf("%d",&n);

//     if(n==1||n==2||n==3)return n;

//         int a = 2, b = 3,ans;
//         for(int i = 3; i <= n; i++){
//             ans = a+b;
//             a = b;
//             b = ans;
//         }
//         printf("%d",b);
    
//     return 0 ;
// }

