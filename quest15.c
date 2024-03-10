//check if given character is present in string or not

#include <stdio.h>
#include <string.h>

void checkchar(char arr[], char c);

int main (){
    
    char arr[100];
    printf("enter a word :");
    scanf("%s", arr);

    char ch;
    printf("enter a letter you want to search :");
    scanf("%s",&ch);

    checkchar(arr, ch);
    return 0 ;
}

void checkchar(char arr [], char ch){
    for(int i=0; i!='\0'; i++){
       if(arr[i] == ch)
       {
            printf("character is present");
            return;
       }
    }
    printf("character is not present");

}
