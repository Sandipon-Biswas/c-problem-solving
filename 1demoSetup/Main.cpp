#include <bits/stdc++.h>
#define ll long long
using namespace std;
// void solve(){
//     ll x;
//     cin>>x;
//     if(x<2050){
//         cout<<-1<<endl;
//         return;
//     }
//     ll s1=2050;
//     ll s2=20500;
//     while(x>=s2){
//         s1*=10;
//         s2*=10;
//     }
//     ll c=0;

//     while(x!=s1 && x<s2){
//         s1+=2050;
//         c++;
//     }
//     if(x==s1){
//          cout<<c<<endl;
//     }else{
//          cout<<-1<<endl;
//     }



// }







int main()
{
  int tt;
  cin>> tt;
  while(tt--){
    ll x;
    cin>>x;
    ll ans=0;
    while(x>=2050){
      ans++;
      ll n=2050;
      while(n<=x){
        n*=10;
      }
      n/=10;
      x=x-n;
    }
    if(x!=0)cout<<-1<<endl;
    else cout<<ans<<endl;
  }
  return 0;
}