// Write a quicksort routine in quick_sort. You should implement an in-place version of quicksort,
// meaning that you shouldn't allocate any additional arrays. Depending on how you implement partitioning,
// you may or may not need a recursive helper function. Additionally, you should choose a random element
// from the list to use as a pivot value at each level, and you may assume that the standard random number
// generator has already been seeded. Your solution should run in O(n log n) expected time.


#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}
//partition function
int partition(int *a, int s, int e){
    int spivot = a[s], cnt=0;
    //iterating to get the right index for pivot
    for(int i=s+1; i<=e; i++){
        if(a[i]<=spivot){
            cnt++;
        }
    }
    int pIndex = (s+cnt);
    swap((a+pIndex),(a+s));
    int i=s, j=e;
    //putting all values less than pivot on the left side
    //and all values greater on the right side
    while(i<pIndex && j>pIndex){
        while(a[i]<=a[pIndex]){
            i++;
        }
        while(a[j]>=a[pIndex]){
            j--;
        }
        if(i<pIndex && j>pIndex){
            swap((a+(i++)),(a+(j--)));
        }
    }
    return pIndex;
}
void quickSort(int *arr, int s, int e){
    if(s>=e){
        return;
    }
    else{
        //calling the partition function to return the index of pivot element
        int pi= partition(arr,s,e);
        //left sort
        quickSort(arr,s,pi-1);
        //right sort
        quickSort(arr,pi+1,e);
    }
}
int main() {
    //taking user input
    int n;
    printf("enter the no. of elements in array: ");
    scanf("%d",&n);
    //dynamically allocating memory to array
    int *arr = (int*) calloc(n,sizeof(int));
    printf("enter elements of array: ");
    for(int i=0; i<n; i++){
        scanf("%d",(arr+i));
    }
    //calling the quicksort function
    quickSort(arr,0,n-1);
    for(int i=0; i<n; i++){
        printf("%d ",*(arr+i));
    }
    return 0;
}