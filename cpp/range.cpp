 #include <bits/stdc++.h>
 using namespace std;

// int main(){

//    int t;
//    cin>>t;

   

//    while(t--){
//     int n,k;
//     cin>>n>>k;

//     int a[n];
//     for(int i=0;i<n;i++)
//     cin>>a[i];

//     int count=0;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(a[j]>a[j+1]){
//                 int temp = a[j];
//                 a[j] = a[j+1];
//                 a[j+1] = temp;
//                  count++;
//             }
//         }
       
//     }

//     if(count<=k){
//         cout<<"YES"<<endl;
//     }
//     else{
//         cout<<"NO"<<endl;
//     }


//    }

    void printvec(vector<int> v ){
        cout<<"size: " << v.size() <<endl;

        for(int i=0; i<v.size(); i++){
            cout<<v[i]<< " " ;
        }
    }
int main(){
    pair<int, string> p;
   // p = make_pair(3, "jhs");
    p = {4, "dude"};
    cout<< p.first <<" "<< p.second <<endl;

    pair<int, string> p1 = p;

    p1.first = 9;
     cout<< p.first <<" "<< p.second<<endl ;
      pair<int, string> &p2 = p;

    p2.first = 9;
     cout<< p.first <<" "<< p.second <<endl ;

    vector <int> v(5);
    v.push_back(9);
    printvec(v);
}