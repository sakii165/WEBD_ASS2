#include <stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("app.txt","r");
    if(fptr == NULL){
        printf("file doesn't exist");
    }else{
        //hdfuflfbvfhfu
    fclose(fptr);
    }
}