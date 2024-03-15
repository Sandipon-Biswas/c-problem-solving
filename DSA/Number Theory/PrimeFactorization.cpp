#include <bits/stdc++.h>
#define ll long long
using namespace std;
// void primefactor(ll n){
//     for (ll i = 2; i*i <= n; i++)
//     {
//         if(n%i==0){
//             int cnt=0;
//             while (n%i==0)
//             {
//                 cnt++;
//                 n/=i;
//             }
//             cout<<i<<"^"<<cnt<<",";
            
//         }
//     }
//     if(n>1)cout<<n<<"^"<<1<<endl;
//     else cout<<endl;
// }
void primefactor(ll n){
    for (ll i = 2; i*i <= n; i++)
    {
       if(n%i==0){
        int cnt=0;
        while(n%i==0){
            cnt++;
            n/=i;
        }
        cout<<i<<"^"<<cnt<<" , ";
       }
    }
    if(n>1)cout<<n<<"^"<<1<<endl;
    else cout<<endl;
    
}
int main()
{
  ll n;
  cin>>n;
   primefactor(n);
  return 0;
}