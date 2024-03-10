//bubble sorting
#include <stdio.h>

int main()
{
    int n,l;
    printf("enter number of input :");
    scanf("%d", &n);
    scanf("%d", &l);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }

    printf("order after sorting :");

    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("%d th largest number is :%d",l,arr[l-1]);
}
