#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};
void printl(struct node *temp){
    
    while(temp!= NULL){
        printf("%d \n",temp->data);
        temp = temp->next;
    }
}  

struct node *deletefirst(struct node *head){
    struct node *ptr = head;
    head = head->next;
    free(ptr);

    return head;
}

struct node *deleteinbet(struct node *head , int index){
    struct node *p = head;

    int i=0;
    while(i != index-1){
        p = p->next;
        i++;
    }
   struct node *q = p->next;
   p->next = q->next;

   free(q);
   return head;
 
}

struct node *deletelast(struct node *head){
    struct node *p = head;

    while(p != NULL){
        p = p->next;
    }

    struct node *q = p->next;
    p->next = NULL;
    free(q);

    return head;

}

   
int main(){

    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));
   
    struct node *current = NULL;
    current = (struct node *)malloc(sizeof(struct node));

     struct node *current1 = NULL;
    current1 = (struct node *)malloc(sizeof(struct node));

    struct node *current2 = NULL;
    current2 = (struct node *)malloc(sizeof(struct node));

        head->data = 4;
        head->next = current;

        current->data = 7;
        current->next = current1;

        current1->data = 5;
        current1->next = current2;

        current2->data = 9;
        current2->next = NULL;

       //head = deletefirst(head);
      // head = deleteinbet(head,2);  //index = 3 can also delete last element of list
        head = deletelast(head);
        printl(head);
       
}