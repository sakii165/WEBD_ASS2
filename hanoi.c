# include <stdio.h>

// int moves(int n){
//     return (1 << n) -1;
// }

void tower(int n, char s, char a, char d){
    if(n == 1)
    {
    printf("move disc 1 %c to %c\n",s,d);

    return;
    }
    tower(n-1,s,d,a);
     printf("move disc %d from %c to %c\n",n,s,d);
    tower(n-1 , a,s,d);

}
int main(){

    int n;
    scanf("%d", &n);

    tower(n,'s','a','d');
}