#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    
	    int count=0;
	    
	   
	    if(a[0] !=1 && a[n-1]!=n){
	       // for(int i=0;a[0] !=1 && a[n-1]!=n && i<n;i++){
	               for(int j=0;a[0] !=1 && a[n-1]!=n && j<n;j++){
	            
	            int temp;
	            temp=a[j];
	            a[j]=a[j+1];
	            count++;
	             }
	          } 
	        
	    else if(a[0] == 1 && a[n-1] == n)
	        count=0;
	        
	        
	     cout<<count<<endl;
	}
	  

}
