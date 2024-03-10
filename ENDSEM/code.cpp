// #include <stdio.h>


// int main()
// {
// 	int t;
// 	scanf("%d",&t);
	
// 	for (int j = 0; j < t; j++)
// 	{
// 		int n;
// 		scanf("%d",&n);

// 		int a[n];
// 		int sum = 0, rate, count = 0;
// 		for (int i = 0; i < n; i++)
// 		{
// 			scanf("%d",&a[i]);
		
// 			sum = sum + a[i];

// 			rate = (sum / i+1) * 100;
// 			if (rate == 100)
// 			{
// 				count++;
// 			}
			
// 		}
// 		printf("%d\n",count);
// 	}

// 	return 0;
// }
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	  
	    int t1,t2,res;
	    float l,v1,v2,t11,t22;
	    cin>>l>>v1>>v2;
	    
	   t1 = (l/v1);
	   t2 = (l/v2);
	   
	    t11 = l/v1;
	   t22 = l/v2;
	   
	   if(t11 > t1)
	   t1=t1+1;
	   else if(t22 > t2)
	   t2=t2+1;
	   
	    cout<<t11<<t22<<endl;
		cout<<t1<<t2;
	   res = t1-t2;
	    
	  
	   cout<<res-1<<endl;
	    
	}

}
