#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool isprime(ll n){
    if(n==2)return true;
    if(n==1 or n%2==0)return false;
    for(ll i=3;i<=sqrt(n);i++){
        if(n%i==0)return false;
    }
    return true;
}
int main()
{
  ll t;
  cin>>t;
  while(t--){
    ll x;
    cin>>x;
    if(isprime(x)){
        cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;
    }
  }
  return 0;
}