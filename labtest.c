#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[50];
    int marks;
};

int main()
{
    int n;
    scanf("%d", &n);
    struct student std[n];

    struct student *std = (struct std *)malloc(n * sizeof(struct student));

    for (int i = 0; i < n; i++)
    {

        scanf("%s", std[i].name);
        scanf("%d", &std[i].marks);
    }
    for (int i = 0; i < n; i++)
    {

        printf("student %d: %s\n", i + 1, std[i].name);
        printf("marks :%d\n", std[i].marks);
    }
}
// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int m;
//     scanf("%d", &m);

//     int i, j;
//     int arr[i][j];
//     for (i = 0; i < m; i++)
//     {
//         for (j = 0; j < m; j++)
//         {
//             int arr[i][j];
//             scanf("%d", &arr[i][j]);
//         }
//     }

//     if (i == j == (m / 2 - 1))
//     {
//         for (int k = 0; k < m / 2; k++)
//         {
//             printf("%d ", arr[i][j]);
//             j--;
//         }

//     }
// }
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void read(char word[]);

int main()
{
    char word[50];
   // scanf("%s", word);

    //int n = strlen(word);
   // printf("%d",n);
   read(word);
}
void read(char word[])
{
    char word[50];
    scanf("%s", word);
    int n = strlen(word);
    for (int i = 0; i<n; i++)
    {
        char temp = word[i];
        word[i] = word[n];
        word[n] = temp;
        printf("%c",word[i]);
    }
    
}