//write function named slice which takes string & returns a sliced string from the index n to m

#include <stdio.h>
#include <string.h>

void slice(char arr[], int n, int m);

int main (){

    char str[100];
     int n , m;
    printf("enter a word you want to be sliced :");
    scanf("%s",str);

    printf("enter the indies that a word to be sliced :");
    scanf("%d %d", &n ,&m);
   void slice(str, m, n);

   return 0 ;

}

 void slice(char str[], int m, int n){
    char new_str[100];
    int j = 0;
     for(int i=n; i<=m; i++){
         new_str[j] = str[i];
    }
     new_str[j] = '\0' ;
     puts(new_str);
 }