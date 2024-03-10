// Write a C Program to Find the Biggest Number in an one-dimensional unsorted array of numbers. You
// should try both iterative and recursive techniques.
//SAKSHI MUNDHE 
#include <stdio.h>
#include <stdlib.h>

//using iteration to get the largest element of the array
int iteration(int *sarr,int n){
    int max=sarr[0];
    for(int i=0; i<n; i++){
        if(sarr[i]>max){
            max=sarr[i];
        }
    }
    return max;
}
//using recursion to get the largest element of the array
int recursion(int *sarr, int n, int smax){
        static int i=0;
        //base case
        if(i==n-1){
         return smax;
        }
        else{
            if(sarr[i]>smax){
             smax=sarr[i];
            }
            i++;
         return recursion(sarr,n,smax);
        }
}
int main() {
    //taking user input
    int n;
    printf("enter the no. of elements in array: ");
    scanf("%d",&n);
    //dynamically allocting memory to array
    int *arr = (int*) calloc(n,sizeof(int));
    printf("enter elements of array: ");
    for(int i=0; i<n; i++){
        scanf("%d",(arr+i));
    }
    //callling the function to get the maximum element using iteration
    printf("the biggest element using iteration is %d\n",iteration(arr,n));
    //callling the function to get the maximum element using recursion
    printf("the biggest element using recursion is %d\n",recursion(arr,n,arr[0]));

    return 0;
}