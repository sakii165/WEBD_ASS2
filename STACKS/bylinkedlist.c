#include<stdio.h>
#include<stdlib.h>
#include<Stdbool.h>

struct stack{
    int data;
    struct stack* lf;
}*top=NULL;

void push(int val){
    struct stack* ele=(struct stack*)malloc(sizeof(struct stack));
    if(ele==NULL){printf("STACK OVERFLOW");}
    ele->data=val;
    ele->lf=top;
    top=ele;
}
int isEmpty(){
    if(top==NULL)return 0;
    else return 1;
}
int pop(){
    if(isEmpty())
    {
        printf("Stack UNDERFLOW\n");exit(1);
    }
    else{
    struct stack* temp = (struct stack*)malloc(sizeof(struct stack));
    temp=top;
    int val=top->data;
    top=top->lf;
    free(temp);temp=NULL;
    return val;

    }
}
void printt(){
    // if(isEmpty()){printf("STACK UNDERFLOW");exit(1);}
    struct stack* temp = (struct stack*)malloc(sizeof(struct stack));
    temp=top;
    while(temp){
        printf("%d  ",temp->data);
        temp=temp->lf;
    }
    printf("\n");
    printf("DONE\n");
}
int main()
{
    int cas;
    printf("Welcome To Stacks Using Linked List:\n");
    printf("Enter the first element to not keep LL NULL !");

    int fir;
    scanf("%d",&fir);

    struct stack* top = (struct stack*)malloc(sizeof(struct stack));
    top->data=fir;
    top->lf=NULL;

    while(1){
    printf("What do you want to do : \n1-PUSH\n2-POP\n3-TOP\n4-PRINT\n5-QUIT\n6-Reverse Element like TOH\n");
   
    scanf("%d",&cas);

    int val,v,del;

    switch(cas){
        case 1:
        printf("Enter Element to PUSH:\n");
        scanf("%d",&val);
        push(val);
        break;
        case 2:
        del=pop();
        printf("Deleting the element%d\n",del);
        break;
        case 3:
        break;
        case 4:
        printf("Printing All Elements.....\n");
        printt();
        break;
        // case 5:
        // exit(1);
        // case 6:
        // printf("Enter if you want to enter elements from start by taking the first element as TOP elements and implement it that way!!");
        // scanf("%d",&v);
        // pushfirs(v);
        // break;
       // case 6:
       // printf("Reversing the Tower....\n");

       // head = revthetow();
        default:
        printf("Please Enter valid responce between 1-5:\n");
    }
    }
}