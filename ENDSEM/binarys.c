#include <stdio.h>

int binarysearch(int arr[], int size, int element){

    int low,mid,high;
    low = 0;
    high = size-1;

    
    while(low<=high){

        mid = (low + high)/2;

        if(arr[mid] == element)
        return mid;

        if(arr[mid]< element)
        low = mid + 1;
        else
        high = mid - 1;

    }

    return -1;
}

int main(){

    int size,element;
   
    int  arr[] = {1,3,6,8,45,90,76,79,345,978};

    size = sizeof(arr)/sizeof(int);

    element = 345;

    int result = binarysearch(arr,size,element);
    printf("%d",result );

   
   
    
}