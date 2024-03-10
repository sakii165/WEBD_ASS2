#include <stdio.h>
#include <stdlib.h>

int merge(int a[], int low, int high){
    int mid = low + (high - low)/2;

    int right = mid+1;
    int left = low;

    int b[high-low+1];
    int k=0;

    while(left<=mid && right<=high){

        if(a[right] < a[left]){
            b[k] = a[right];
            right++;
        }else{
          b[k] = a[left];
          left++;
        }
          k++;  
        
    }

    while(right<=high){
        b[k] = a[right];
        right++;
    }

    while(left<=mid){
        b[k] = a[left];
        left++;
    }

    for (int i = 0; i < high-low+1; i++)
    {
        a[low+i] = b[i];
    }
    

}

int mergesort(int a[], int low, int high){
    if(low>=high)
    return 0;

    int mid = low + (high - low)/2;

    mergesort(a, low, mid);
    mergesort(a, mid+1, high);
    merge(a, low, high);
}

int main(){
    int a[] = {8, 3, 1, 4, 0, 9};
    int size = sizeof(a)/4;

    mergesort(a, 0, size-1);

    for (int i = 0; i < size; i++)
    {
        printf("%d ",a[i]);
    }
    
}