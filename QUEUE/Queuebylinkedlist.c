#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct queue {
    struct node *front;
    struct node *rear;
};

struct node* createnode(int x) {
    struct node* new = (struct node*)malloc(sizeof(struct node));
    new->data = x;
    new->next = NULL;
    return new;             
}

struct queue* createqueue() {
    struct queue* newq = (struct queue*)malloc(sizeof(struct queue));
    newq->front = NULL;
    newq->rear = NULL;
    return newq;
}

void enqueue(struct queue* newq, int data) {
    struct node* newnode = createnode(data);
    if (newq->rear == NULL) {
        newq->front = newq->rear = newnode;
        return;
    }
    newq->rear->next = newnode;
    newq->rear = newnode;
}

int dequeue(struct queue* q) {
    if (q->front == NULL) {
        return -1;
    }

    struct node* temp = q->front;
    int data = temp->data;
    q->front = q->front->next;

    if (q->front == NULL)
        q->rear = NULL;
    free(temp);

    return data;
}

// Function to print the queue
void print(struct queue* q) {
    struct node* temp = q->front;
    printf("Queue: ");

    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct queue* q = createqueue();

    enqueue(q, 10);
    enqueue(q, 20);
    enqueue(q, 30);
    enqueue(q, 40);

    print(q);

    printf("Dequeued item: %d\n", dequeue(q));
    printf("Dequeued item: %d\n", dequeue(q));

    print(q);

    return 0;
}
