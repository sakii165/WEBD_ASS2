#include <stdio.h>
#include <stdlib.h>

#define INT_MAX 100

int queue[INT_MAX];
int front = -1 ;
int rear = -1 ;

void insert(int x){

    if(rear == INT_MAX-1)
    printf("no space");

    else if(front == -1 && rear == -1){
    front = 0;
    rear = 0;
    queue[rear] = x;
    }
    else{
        rear++;
        queue[rear] = x;
    }           

}

int dequeue(){
    if(front == -1 && rear == -1){
        printf("overflow");
    }
    else if (front == rear){
        front = -1;
        rear = -1;
    }
    else{
        printf("%d",queue[front]);
        front++;
    }
}

void display(){
    if(front == -1 && rear == -1){
        printf("overflow");
    }else{
        printf("%d",queue[rear]);
        rear++;
    }
}

int main (){
        insert(5);
        display();
        insert(9);
        dequeue();
        display();
}




