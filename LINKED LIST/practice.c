// #include <stdio.h>
// #include <stdlib.h>

//   int ct = 0;
// struct node{
//     int data;
//     struct node *next;
// };

// void printl(struct node* temp){
  
//     while(temp!= NULL){
//         printf("%d ", temp->data);
//         temp = temp->next;
//         ct++;
//     }
//     printf("\ntotal number of elements present : %d",ct);
// }

// // int search(struct node *temp,int key){
// //     while(temp !=NULL){
// //         if(temp->data == key)
// //         return  1;
// //         else 
// //         temp = temp->next;
// //     }

// //     return 0;
// //}

// int main(){
//     struct node *head = NULL;
//     head = (struct node *)malloc(sizeof(struct node));

//     struct node *l1 = NULL;
//     l1 = (struct node *)malloc(sizeof(struct node));

//     struct node *l2 = NULL;
//     l2 = (struct node *)malloc(sizeof(struct node));

//     struct node *l3 = NULL;
//     l3 = (struct node *)malloc(sizeof(struct node));

//     head->data = 23;
//     head->next = l1;

//     l1->data = 56;
//     l1->next = l2;

//     l2->data = 34;
//     l2->next = l3;

//     l3->data = 99;
//     l3->next = NULL;

//     // int f = search(head,100);

//     // if(f == 1)
//     // printf("element found!");
//     // else{
//     //     printf("element not found!");
//     // }
//    printl(head);
// }

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

void push(struct node **temp, int ele){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = ele;
    ptr->next = *temp;
    *temp = ptr;
}

void printl(struct node* temp){
  
    while(temp!= NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

struct node* print_middle(struct node *temp,int size){
    struct node *ptr = temp;

    for(int i=0; i<size/2; i++){

        ptr = ptr->next;
    }
   
    return ptr;
}


int main(){

    int a[] = {2,45,32,98,45};
    int size = sizeof(a)/4;

    struct node *start = NULL;
    for(int i=0; i<size ;i++){
        push(&start,a[i]);
    }

    struct node* middle = print_middle(start,size);
    printl(middle);


}