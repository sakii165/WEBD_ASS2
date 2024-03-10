#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
struct Node* push(struct Node* head, int data){
    struct Node* q=(struct Node*)malloc(sizeof(struct Node));
    struct Node* p=head;
    
    while(p!=NULL && p->data < data){
        if(p->next->data > data)
        break;
        else{
        p = p->next;
        }
    }
   
    q->next = p->next;
    p->next = q;
    q->data = data;

    return head;
}
void sorted_list(struct Node* head){
    struct Node *i,*j;
        for( i=head; i!=NULL; i=i->next){
            for(j=i->next;j!=NULL;j=j->next){
        //swapping
        if(i->data>j->data){
            int temp;
            temp=i->data;
            i->data=j->data;
            j->data=temp;
        }
      }
    }
}

void printl(struct Node* ptr){
    while(ptr!=NULL){
        printf("element: %d\n",ptr->data);
        ptr=ptr->next;
    }
}
int main(){
    struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* fourth;

    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));

    head->data=5;
    head->next=second;

    second->data=15;
    second->next=third;

    third->data=20;
    third->next=fourth;

    fourth->data=10;
    fourth->next=NULL;
    
    printl(head);

    printf("after sorting the linked list\n");
    sorted_list(head);
    printl(head);

    printf("after insertion\n");
    head = push(head,7);
    printl(head);
    
