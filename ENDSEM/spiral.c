#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d ", &arr[i][j]);
        }
    }
    int c = n / 2;
    int d = n / 2;
    printf("%d", arr[c][d]);

    for (int i = 0; i < n; i++)
    {
        int xx = d - (n - d - 1);
        int yy = (c - 0) - (n - c - 1);
        if (xx >= 0)
        {

            while ((xx >= 0)&&(d>0))
            {
                d--;
                printf("%d ", arr[c][d]);
                xx--;
            }
            while ((yy <= 0)&&(c>0))
            {
                c++;
                printf("%d ", arr[c][d]);
                yy++;
            }
        }
        else
        {
            while (xx < 0)
            {
                d++;
                printf("%d ", arr[c][d]);
                xx++;
            }
            while (yy > 0)
            {
                c--;
                printf("%d ", arr[c][d]);
                yy--;
            }
        }
    }
}