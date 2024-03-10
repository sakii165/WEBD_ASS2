# include <stdio.h>

int rec_binarysearch(int n,int a[] ,int element,int l,int r){

if(a[(l+r)/2] == element)
return (l+r)/2 ;

if(a[(l+r)/2] < element)
return binarysearch(n, a, element, (l+r)/2 +1,r);

        if(a[(l+r)/2]> element)
return binarysearch(n,a,element,l,(l+r)/2-1);

return -1;

}


int binarysearch(int n,int a[] ,int element){

int left, right;

left =0;
right=n-1;

while(left < right){

int mid = (left+right)/2;

if(a[mid] == element)
return mid;

if(a[mid] < element)
left = mid+1;

if(a[mid] > element)
right = mid-1;

}
return -1;
}

int main(){


int n;
scanf("%d",&n);


int a[n];
for(int i=0;i<n; i++)
scanf("%d",&a[i]);


int element;
scanf("%d",&element);

int result = binarysearch(n, a ,element);
printf("%d",result);


int ans =rec_binarysearch( n, a , element,0,n-1);
printf("%d",ans);


}
