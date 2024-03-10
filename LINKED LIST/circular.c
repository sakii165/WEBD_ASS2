#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

void circle(struct node *head){
    struct node *ptr = head;

    do{
       printf("element is :%d\n",ptr->data);
       ptr = ptr->next;
    }while(ptr != head);
}

int main(){

    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));
   
    struct node *current = NULL;
    current = (struct node *)malloc(sizeof(struct node));

    struct node *current2 = NULL;
    current2 = (struct node *)malloc(sizeof(struct node));

        head->data = 45;
        head->next = current;

        current->data = 47;
        current->next = current2;

        current2->data = 49;
        current2->next = head;

        circle(head);
}