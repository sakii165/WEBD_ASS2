// #include <stdio.h>
// #include <stdlib.h>

// struct node{
//     int data;
//     struct node *next;
// };

// void printl(struct node *head){
//     struct node *p = head->next;

//     while(p != NULL){
//         printf("%d ",p->data);
//         p = p->next;

//     }
   
// }

// struct node *inputdata(struct node **head, int d) {
//     struct node *new = (struct node *)malloc(sizeof(struct node));
//     new->data = d;
//     new->next = NULL;

//     struct node *temp = *head;
//     while (temp->next != NULL) {
//         temp = temp->next;
//     }
//     temp->next = new;

//     return *head;
// }
// struct  node* removeduplicate(struct node *head){
//     struct node *p =head;
//     struct node *q = head;

//     printf("hy");
//     while(q!= NULL) {

//         if(p->data == q->data){
//         q = q->next;

//         }else{
//         p->next = q;
//         p = q;
//         }

//     }
            
// return head;

// }

// int main(){

//     struct node *ptr = NULL;
//     ptr = (struct node *) malloc (sizeof(struct node));

//     int n;
//     printf("enter number of elements in linked list :");
//     scanf("%d",&n);

//     for (int i = 0; i < n; i++)
//     {
//         int d;
//         scanf("%d",&d);
//         inputdata(&ptr,d);
//     }
   
//     ptr = removeduplicate(ptr);
//     printl(ptr);

// }


#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

void printl(struct node *head) {
    struct node *p = head->next;

    while (p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

struct node *inputdata(struct node **head, int d) {
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->data = d;
    new->next = NULL;

    struct node *temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = new;

    return *head;
}

struct node *removeduplicate(struct node *head) {
    struct node *p = head;
    struct node *q;

    while (p != NULL && p->next != NULL) {
        q = p;
        while (q->next != NULL) {
            if (p->data == q->next->data) {
                struct node *temp = q->next;
                q->next = q->next->next;
                free(temp);
            } else {
                q = q->next;
            }
        }
        p = p->next;
    }

    return head;
}

int main() {
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->next = NULL;

    int n;
    printf("Enter the number of elements in the linked list: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int d;
        scanf("%d", &d);
        inputdata(&ptr, d);
    }

    ptr = removeduplicate(ptr);
    printf("Linked list after removing duplicates: ");
    printl(ptr);

    // Free the allocated memory
    struct node *temp;
    while (ptr != NULL) {
        temp = ptr;
        ptr = ptr->next;
        free(temp);
    }

    return 0;
}
