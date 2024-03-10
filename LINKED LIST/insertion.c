#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};
void printl(struct node *temp){
    
    while(temp!= NULL){
        printf("%d \n",temp->data);
        temp = temp->link;
    }
}

struct node *insertatfirst(struct node *head,int data){
    struct node *ptr =(struct node *) malloc (sizeof(struct node));

    ptr-> link = head;
    ptr-> data = data;
    return ptr;
}

struct node *insertatend(struct node *head, int data){
     struct node *ptr =(struct node *) malloc (sizeof(struct node));
     ptr->data = data;
    struct node *p = head;

    while(p->link != NULL){
     p = p->link;
    }

    p->link = ptr;
    ptr->link = NULL;
     return head;

}

struct node *insertafternode(struct node *head, int data ,struct node *prvnode){
    struct node *ptr =(struct node *) malloc (sizeof(struct node));
     ptr->data = data;

     ptr->link = prvnode->link;
     prvnode->link = ptr;
     return head;

}

struct node *insertatindex (struct node *head,int data ,int index){
     struct node *ptr =(struct node *) malloc (sizeof(struct node));
    struct node * p =head;

    int i=0;
     while( i != index-1){
        p = p->link;
        i++;
     }

    ptr->data = data;
    ptr->link = p->link;
    p->link = ptr;
}

struct node *insertatend (struct node *head, int data ){

    
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

      
        head = insertatfirst(head ,66);
       // current2 = insertatend(current2 ,89);
        insertatindex(head,100,2);
        // insertatindex func can also add element at end {insertatindex(head,100,4)}
        printl(head);

}