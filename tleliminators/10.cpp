# include <bits/stdc++.h>
using namespace std;
const int N = 1e7+10;
int hsh[N];

int main(){
    int t;
    cin>> t;

    while(t--){
        int n,k;
        cin>> n >> k;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            hsh[a[i]]++;

        }
        
        int max = 0,index;
        for (int i = 0; i < n; i++)
        {
           if(max < hsh[i])
           max = hsh[i];
           i = index;
        }
             if(index == k)
                 cout<< "YES"<<endl;
              else 
                 cout<< "NO"<< endl;

    }
}