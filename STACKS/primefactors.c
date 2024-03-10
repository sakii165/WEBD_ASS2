#include <stdio.h>
#include <stdlib.h>

int ct = 0;

struct node{
    int data;
    struct node *next;
};

void push(struct node **bottom ,int p){
    struct node *temp = NULL;
    temp = (struct node *)malloc(sizeof(struct node));

    if(temp == NULL)
    printf("underflow");
    else{
        temp->data = p;
        temp->next = *bottom;
        *bottom = temp;
    }


}

void prints(struct node *bottom){
    while(bottom != NULL){
        printf("%d",bottom->data);
        bottom = bottom->next;
    }
    printf("\n");
}

int pop(struct node **temp){
    if(*temp == NULL){
    printf("underflow");
    return -1;
    }
    else{
        struct node *top = *temp;
        int val = top->data;
        *temp = top->next;
        free(top);
        return val;
    }
    
}

int prime_fact(int num,struct node **bottom){
    int i=2;
    while(num!=1){
        while(num % i == 0){
            num = num / i;
            push(bottom,i);
            ct++;
        }
        i++;
    }
}

int main(){
    struct node *bottom = NULL;

    prime_fact(12,bottom);
    prints(bottom);

    while(ct--){
    printf("%d",pop(&bottom));
    }

}

// #include <stdio.h>
// #include <stdlib.h>

// int ct = 0;

// struct node {
//     int data;
//     struct node *next;
// };

// void push(struct node **bottom, int p) {
//     struct node *temp = (struct node *)malloc(sizeof(struct node));

//     if (temp == NULL)
//         printf("underflow");
//     else {
//         temp->data = p;
//         temp->next = *bottom;
//         *bottom = temp;
//     }
// }

// void prints(struct node *bottom) {
//     while (bottom != NULL) {
//         printf("%d ", bottom->data);
//         bottom = bottom->next;
//     }
//     printf("\n");
// }

// int pop(struct node **bottom) {
//     if (*bottom == NULL) {
//         printf("underflow");
//         return -1; // Return a sentinel value indicating an error or underflow
//     }

//     struct node *top = *bottom;
//     int val = top->data;
//     *bottom = top->next;
//     free(top);

//     return val;
// }

// void prime_fact(int num, struct node **bottom) {
//     int i = 2;
//     while (num != 1) {
//         while (num % i == 0) {
//             num = num / i;
//             push(bottom, i);
//             ct++;
//         }
//         i++;
//     }
// }

// int main() {
//     struct node *bottom = NULL;

//     prime_fact(66, &bottom);
//     prints(bottom);

//     while (ct--) {
//         printf("%d ", pop(&bottom));
//     }

//     return 0;
// }

