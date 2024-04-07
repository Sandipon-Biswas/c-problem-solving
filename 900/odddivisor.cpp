#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool solve(ll n){
    if(n==1)return false;
    if(n==2)return false;
    if(n%2!=0)return true;
    for(int i=3;i<n;i*=2){
        if(n==i)return true;
    }
    return false;
}
int main()
{
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    if(solve(n)){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
  }
  return 0;
}