#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
};

void display1(struct node *temp){
    while(temp != NULL){
        printf(" %d <->",temp->data);
        temp = temp->next;
    }
}

void display2(struct node *temp){
    while(temp != NULL){
        printf(" %d <->",temp->data);
        temp = temp->prev;
    }
        printf("\n");
printf("\n");

}

int main (){
    struct node *n1 = (struct node *)malloc(sizeof(struct node));
    
    struct node *n2 = (struct node *)malloc(sizeof(struct node));

    struct node *n3 = (struct node *)malloc(sizeof(struct node));

    struct node *n4 = (struct node *)malloc(sizeof(struct node));

    struct node *n5 = (struct node *)malloc(sizeof(struct node));

    n1->data = 2;
    n1->prev = NULL;
    n1->next = n2;

    n2->data = 4;
    n2->next = n3;
    n2->prev = n1;

    n3->data = 6;
    n3->next = n4;
    n3->prev = n2;

    n4->data = 8;
    n4->next = n5;
    n4->prev = n3;

    n5->data = 0;
    n5->next = NULL;
    n5->prev = n4;

    display1(n1);
    display2(n5);

}