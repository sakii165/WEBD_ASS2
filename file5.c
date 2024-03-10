#include <stdio.h>
int main(){
    FILE *ptr;
    ptr = fopen("apple.txt","r");

     if (ptr == NULL) {
        printf("File could not be opened.");
        return 1;
    }
    char ch;
    ch = fgetc(ptr);

    while(ch!=EOF){

        printf("%c",ch);
         ch = fgetc(ptr);

    }

    fclose(ptr);
    return 0;
}