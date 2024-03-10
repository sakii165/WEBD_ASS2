#include <stdio.h>
#include <string.h>

int main()
{

    FILE *fptr;
    fptr = fopen("apple.txt", "w");
   // fptr = fopen("apple.txt", "a")

     fprintf(fptr, "%s", "sakshi ");
    fprintf(fptr, "%c", 'm');
    fprintf(fptr, "%c", 'u');
    fprintf(fptr, "%c", 'n');
    fprintf(fptr, "%c", 'd');
    fprintf(fptr, "%c", 'h');
    fprintf(fptr, "%c", 'e');
    fclose(fptr);

    return 0;
}