#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node{
    char data;
    struct node *next;
};

void printl(struct node *head){

    struct node *p = head;

    while(p->next != NULL){
        printf(" %c ", p->data);
        p = p->next;

    }
   printf(" %c ", p->data);
}
struct node* inputdata(struct node *head, char d){

    struct node *new = (struct node *) malloc (sizeof(struct node));
    new->data = d;
    new->next = NULL;
    {
        struct node * temp  = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = new;
   
    }
    return head;
}  

void AlternatingSplit(struct node* head, struct node** list1, struct node** list2) {
    struct node *temp = head, *p = NULL, *q= NULL;

    while (temp != NULL) {
       
        if (p == NULL) {
            p = temp;
            *list1 = p;
        } else {
            p->next = temp;
            p = p->next;
        }
        temp = temp->next;

        if (temp != NULL) {
            if (q == NULL) {
                q= temp;
                *list2 = q;
            } else {
                q->next = temp;
                q = q->next;
            }
            temp = temp->next;
        }
    }

    if (p != NULL) {
        p->next = NULL;
    }
    if (q!= NULL) {
        q->next = NULL;
    }
}

int main(){

    struct node *ptr = NULL;
     struct Node* list1 = NULL;
    struct Node* list2 = NULL;

    ptr = (struct node *) malloc (sizeof(struct node));
    ptr->next=NULL;

    int n;
    printf("enter number of elements in linked list :");
    scanf("%d",&n);

    char d;
    scanf(" %c",&d);
    ptr->data=d;

    for (int i = 0; i < n; i++)
    {
        scanf(" %c",&d);
        ptr = inputdata(ptr,d);
    }
   
    AlternatingSplit(ptr, &list1, &list2);

    printf("List 1: ");
    printl(list1);

    printf("\n");

    printf("List 2: ");
    printl(list2);

}







