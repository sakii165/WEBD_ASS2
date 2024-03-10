#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        int a[n];
        for (int i = 0; i < n; i++)
             cin >> a[i];
       
        bool valid=true;
        for (int i = 0; i < n-1; i++)
        {
            if(a[i+1]< a[i])
            valid = false;
        }
        
        if( k<2 && (!valid) )
        cout<< "NO" << endl;
        else
        cout << "YES" << endl;
        

    }
}
