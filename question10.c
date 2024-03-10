#include <stdio.h>
int main()
{

    int i, j;
    int two, three;
    two = three = 1;
    int tab[10][2];
    for (i = 0; i < 10; i++)
    {
        j = 0;

        tab[i][j] = two * 2;
        tab[i][j + 1] = three * 3;
        two++;

        three++;
    }
     for (i = 0; i < 10; i++)
    {
        j = 0;

        printf("%d \t", tab[i][j]);
        printf("%d", tab[i][j + 1]);
        printf("\n");
    }

    return 0 ;
}