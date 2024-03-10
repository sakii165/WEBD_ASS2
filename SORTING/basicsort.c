//insertion sort
#include <stdio.h>
#include <stdlib.h>

void insertionsort(int arr[], int n) {
    int i, j;
    for (i = 1; i < n; i++) {
        j = i - 1;

        /* Move elements of arr[0..i-1], that are greater than key, to one position ahead of their current position */
        while (j >= 0 && arr[j] > arr[i]) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = arr[i];
    }
}

// void printarr(int size, int arr[]){
//     for(int i = 0 ; i < size ; i++){
//         printf("%d  ",arr[i]);
//     }
// }

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionsort( int *a, int size){

    for (int i = 0; i < size-1; i++)
    {
        int index = i;

        for (int j = i+1; j < size; j++)
        {
           if(a[j] < a[index])
           index = j ;
        }
        
       swap(&a[index], &a[i]);
        
        //   int  temp = a[i];
        //     a[i] = a[index];
        //     a[index] = temp;
       
    }
    
}

int main()
{
    int a[] = {3,5,8,2,10,68,43};
    int size = sizeof(a)/sizeof(int);

    selectionsort(a , size);

    for (int i = 0; i < size; i++)
    {
        printf("%d  ",a[i]);
    }
    
    // insertionsort(arr,n);
    // printarr(n , arr);

}