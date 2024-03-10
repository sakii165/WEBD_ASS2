#include <stdio.h>

#define ARRAY_SIZE 5 // Global variable for array size


void interchange(int *a1, int *a2, int size) {
    for (int i = 0; i < size; i++) {
        // Swap elements at each index
        int temp = *(a1 + i);
        *(a1 + i) = *(a2 + i);
        *(a2 + i) = temp;
    }
}

int main() {
   
    int a1[ARRAY_SIZE] = {1, 2, 3, 4, 5};
    int a2[ARRAY_SIZE] = {6, 7, 8, 9, 10};

   
    printf("Original Arrays:\n");
    printf("Array 1: ");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d ", a1[i]);
    }
    printf("\nArray 2: ");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d ", a2[i]);
    }
    printf("\n");

   
    interchange(a1, a2, ARRAY_SIZE);

   
    printf("\nArrays after swapping:\n");
    printf("Array 1: ");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d ", a1[i]);
    }
    printf("\nArray 2: ");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d ", a2[i]);
    }
    printf("\n");

    return 0;
}
