#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};
void printl(struct node *temp){
    
    while(temp!= NULL){
        printf("%d",temp->data);
        temp = temp->link;
    }
}

 
int main(){

    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));
   
    struct node *current = NULL;
    current = (struct node *)malloc(sizeof(struct node));

    struct node *current2 = NULL;
    current2 = (struct node *)malloc(sizeof(struct node));

        head->data = 45;
        head->link = current;

        current->data = 47;
        current->link = current2;

        current2->data = 49;
        current2->link = NULL;

        head->link = current;

        printl(head);

}