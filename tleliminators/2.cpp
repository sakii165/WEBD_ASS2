# include <bits/stdc++.h>
using namespace std;

int main (){


    int t;
    cin>> t;

    while(t--){
        int n,x;
        cin>> n >> x;

        int a[n];
        a[0]=0;
        for (int i = 1; i < n+1; i++)
        {
           cin >> a[i];
        }
         
         // x - a[n-1] ;
         int max = 0;
         for (int i = 0; i < n; i++){
            int b[n];
            b[i] = a[i+1] - a[i];
          if(max < b[i])
          max = b[i];
        }
            cout<< max << endl;
         if(  (x - a[n])*2> max)
         cout <<(x - a[n])*2 << endl;
         else
         cout << max << endl; 
       
    }
}