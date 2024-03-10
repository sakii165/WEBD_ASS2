/*Write a C program to implement iterative(non recursive) and recursive Binary Search method*/
#include <stdio.h>
#include <stdlib.h>
//using binarySearch method to find the key element using recursion
int binarySearch(int *a, int s, int e,int key){
        int mid = (s+e)/2;
        //base case
        if(s>=e){
                return mid;
        }
        if(key==a[mid]){
                return mid;
        }
        if(key<a[mid]){
                return binarySearch(a,s,mid-1,key);
        }
        if(key>a[mid]){
                return binarySearch(a,mid+1,e,key);
        }
}
//using binarySearch method to find the key element using iteration
int binSrch(int *a, int s, int e, int key){
        while(s<=e){
        int mid = (s+e)/2;
        if(s>=e){
                return mid;
        }
        if(key==a[mid]){
                return mid;
        }
        else if(key<a[mid]){
                e = mid-1;
        }
        else if(key>a[mid]){
                s = mid+1;
        }
        }
}

int main() {
    int n;
    printf("enter the no. of elements in array: ");
    scanf("%d",&n);
    int *arr = (int*) calloc(n,sizeof(int));
    printf("enter elements of array: ");
    for(int i=0; i<n; i++){
        scanf("%d",(arr+i));
    }
    int key;
    printf("enter key: ");
    scanf("%d",&key);

    printf("%d is the index of %d\n",binarySearch(arr,0,n,key),key);
    printf("%d is the index of %d\n",binSrch(arr,0,n,key),key);

    return 0;
}
