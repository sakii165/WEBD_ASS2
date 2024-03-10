#include<stdio.h>
#include<stdlib.h>

int quick(int a[],int low, int high){
    int pivot = a[low];
    int i = low ;
    int j = high;

    while(j>i){

        while(pivot > a[i])
        i++;

        while(pivot < a[j])
        j--;

       
        if(i<j){
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }

        int temp = pivot;
        pivot = a[j];
        a[j] = pivot;

    }
     return j;
}

void quicksort(int a[], int low, int high) {
    if (low < high) {
        int pivotIndex = quick(a, low, high);

        quicksort(a, low, pivotIndex - 1);
        quicksort(a, pivotIndex + 1, high);
    }
}


int main(){
    int a[] = {8, 3, 1, 4, 0, 9};
    int size = sizeof(a)/4;

    quicksort(a, 0, size-1);

    for (int i = 0; i < size; i++)
    {
        printf("%d ",a[i]);
    }
    

}