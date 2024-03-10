// # include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;

//     while(t--){
//         int n;
//         cin >> n;

//         string s;
//         cin >> s;

//         int n1,n2;
//         for (int i = 0; i < n; i++)
//         {   
//             n1 = i;
//             if(s[i] == 'B'){
//             break;
//             }
//         }
//          for (int i = n-1; i >=0; i--)
//         {   
//             n2 = i;
//             if(s[i] == 'B'){
//             break;
//             }
//         }

//         cout << n2-n1+1 << endl;
        
//     }

// }
#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter integer part of no" << endl;
    long long n;
    cin >> n;
    int sign = 0;
    if (n < 0)
    {
        sign = 1;
        n = n * -1;
    }


    // integer part

    int int_count = 0;
    long long rev = 1;
    while (n > 0)
    {
        rev = rev * 10 + n % 2;
        n /= 2;
    }
    vector<long long> mantis;
    while (rev > 1)
    {
        mantis.push_back(rev%10);
        rev /= 10;
        int_count++;
    }
    


    // decimal part


    cout << "Enter decimal part of no" << endl;
    long long decimal;
    cin >> decimal;
    long long dec_nn = decimal;
    long long dec_rev =0;
    int dec_count = 0;
    while (decimal >0 )
    {
        dec_count++;
        decimal /= 10;
    }
    int dec[dec_count];
    int i=0;
    while (dec_rev < 1)
    {
        dec[i++]=(( dec_nn *2)/(int)(pow(10,dec_count)));
        dec_rev=( dec_nn *2)/(int)(pow(10,dec_count));
        dec_nn =dec_nn*2;
    }
    

    // exponent part


    int exp = 127 + int_count - 1;
    int exp_nn = 0;
    int exp_rev = 1;
    while (exp > 0)
    {
        exp_rev = exp_rev * 10 + exp % 2;
        exp /= 2;
    }
    while (exp_rev > 1)
    {
        exp_nn = exp_nn * 10 + exp_rev % 10;
        exp_rev /= 10;
    }
    cout<<"IEEE 754 single precision floating point representation is\n";
    cout <<"Sign of the no is "<<sign << endl;
    cout<<"Exponent of the no is "<<exp_nn<<endl;
    cout<<"Exponent of the no is ";
    for(auto it:mantis)
    cout<<it;
    for(int j=0;j<i;j++)
    cout<<dec[j];
}