#include <stdio.h>
int main()
{
    int n;
    printf("enter your number :");
    scanf("%d", &n);
    int count = 0;
    int nn = n;

    while (nn > 0)
    {
        count++;
        nn = nn / 10;
        
    }
    int sum = 0;
    int i;
    nn = n;
    for (i = 0; i < count; i++)
    {
        int power = 1;
        for (int j = 0; j < count; j++)
        {
            power *= (nn % 10);
        }
        sum = sum + power;
        nn /= 10;
    }
    if (sum == n)
        printf("armstrong number");

    else
        printf("not an armstrong number");

    return 0;
}