// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     arr[0]=0,arr[1]=1,arr[2]=2;
//     for(int i=3;i<n;i++)
//     arr[i]=arr[i-1]+arr[i-2]+arr[i-3];
//     for(int i=0;i<n;i++)
//     printf("%d ",arr[i]);
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    
	    int min , max;
	    if(n == 1){
	       max = 1;
	       min = 1;
	    }
	    
	    else if(n%2 != 0){
	    max = (n/2) + 1;
	    min = n/2;
	    }
	    else
	    {
	        max = n/2;
	        min = n/2;
	    }
	    cout << max <<" "<< min <<endl;
	}

}
