#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* swap(struct Node* ptr1, struct Node* ptr2)
{
    struct Node* tmp = ptr2->next;
    ptr2->next = ptr1;
    ptr1->next = tmp;
    return ptr2;
}

int bubbleSort(struct Node** head, int count)
{
    struct Node** h;
    int i, j, swapped;

    for (i = 0; i < count - 1; i++) {

        h = head;
        swapped = 0;

        for (j = 0; j < count - i - 1; j++) {

            struct Node* p1 = *h;
            struct Node* p2 = p1->next;

            if (p1->data > p2->data) {

                /* update the link after swapping */
                *h = swap(p1, p2);
                swapped = 1;
            }

            h = &(*h)->next;
        }

        if (swapped == 0)
            break;
    }
}

int bubbleSort2(struct Node** head, int count)
{
    struct Node** h;
    int i, j, swapped;

    for(int k=0;k<count;k++){
        h = &(*h)->next;
    }

    for (i = 0; i < count - 1; i++) {

        h = head;
        swapped = 0;

        for (j = 0; j < count - i - 1; j++) {

            struct Node* p1 = *h;
            struct Node* p2 = p1->next;

            if (p1->data < p2->data) {

                /* update the link after swapping */
                *h = swap(p1, p2);
                swapped = 1;
            }

            h = &(*h)->next;
        }

        if (swapped == 0)
            break;
    }
}

void printList(struct Node* n)
{
    while (n != NULL) {
        printf("%d -> ", n->data);
        n = n->next;
    }
    printf("\n");
}

void insertAtTheEnd(struct Node** start_ref, int data)
{
    struct Node* ptr1 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = *start_ref;

    ptr1->data = data;
    ptr1->next = NULL;

    if (*start_ref == NULL) {
        *start_ref = ptr1;
        return;
    }

    while (last->next != NULL)
        last = last->next;

    last->next = ptr1;
}

int main()
{
    int arr[] = {34,79,7,2,98,0};
    int list_size = sizeof(arr) / sizeof(arr[0]);
    int i;

    struct Node* start = NULL;

    for (i = 0; i < list_size; i++)
        insertAtTheEnd(&start, arr[i]);

    printf("Linked list before sorting\n");
    printList(start);

    int first_half_size = list_size / 2;

    // Sorting the first half in ascending order
    bubbleSort(&start, first_half_size);

     printf("Linked list after sorting\n");
     printList(start);

    // Sorting the second half in descending order
    bubbleSort2(&start, list_size);

    printf("Linked list after sorting\n");
    printList(start);

    return 0;
}

// #include <stdio.h>
// #include <stdlib.h>

// struct Node {
//     int data;
//     struct Node* next;
// };

// struct Node* swap(struct Node* ptr1, struct Node* ptr2)
// {
//     struct Node* tmp = ptr2->next;
//     ptr2->next = ptr1;
//     ptr1->next = tmp;
//     return ptr2;
// }

// int bubbleSort(struct Node** head, int count)
// {
//     struct Node** h;
//     int i, j, swapped;

//     for (i = 0; i < count - 1; i++) {

//         h = head;
//         swapped = 0;

//         for (j = 0; j < count - i - 1; j++) {

//             struct Node* p1 = *h;
//             struct Node* p2 = p1->next;

//             if (p1->data > p2->data) {

//                 /* update the link after swapping */
//                 *h = swap(p1, p2);
//                 swapped = 1;
//             }

//             h = &(*h)->next;
//         }

//         if (swapped == 0)
//             break;
//     }
// }

// int bubbleSort2(struct Node** head, int count)
// {
//     struct Node** h;
//     int i, j, swapped;

//     for (i = 0; i < count - 1; i++) {

//         h = head;
//         swapped = 0;

//         for (j = 0; j < count - i - 1; j++) {

//             struct Node* p1 = *h;
//             struct Node* p2 = p1->next;

//             if (p1->data < p2->data) {

//                 /* update the link after swapping */
//                 *h = swap(p1, p2);
//                 swapped = 1;
//             }

//             h = &(*h)->next;
//         }

//         if (swapped == 0)
//             break;
//     }
// }

// void printList(struct Node* n)
// {
//     while (n != NULL) {
//         printf("%d -> ", n->data);
//         n = n->next;
//     }
//     printf("\n");
// }

// void insertAtTheEnd(struct Node** start_ref, int data)
// {
//     struct Node* ptr1 = (struct Node*)malloc(sizeof(struct Node));
//     struct Node* last = *start_ref;

//     ptr1->data = data;
//     ptr1->next = NULL;

//     if (*start_ref == NULL) {
//         *start_ref = ptr1;
//         return;
//     }

//     while (last->next != NULL)
//         last = last->next;

//     last->next = ptr1;
// }

// int main()
// {
//     int arr[] = {34,79,7,2,98,0};
//     int list_size = sizeof(arr) / sizeof(arr[0]);
//     int i;

//     struct Node* start = NULL;

//     for (i = 0; i < list_size; i++)
//         insertAtTheEnd(&start, arr[i]);

//     printf("Linked list before sorting\n");
//     printList(start);

//     int first_half_size = list_size / 2;

//     // Sorting the first half in ascending order
//     bubbleSort(&start, first_half_size);
//     printf("Sorted half in ascending order\n");
//     printList(start);

//     // Sorting the second half in descending order
//     bubbleSort2(&start, list_size - first_half_size);

//     // Skip the first half to print only the second half
//     for (i = 0; i <first_half_size; i++)
//         start = start->next;

//     printf("Sorted half in descending order\n");
//     printList(start);

//     return 0;
// }

