#include <bits/stdc++.h>

using namespace std;
#define ll long long
bool isp(ll n){
    if(n==2)return true;
    if(n==1|| n%2==0)return false;
    for(int i=3;i<=sqrt(n);i=i+2){
        if(n%i==0)return false;
    }
    return true;
}
int main()
{
  ll t;
  cin>>t;
  while(t--){
    int f=0;
    ll x;
    cin>>x;
    ll q=sqrt(x);
    if(q*q==x && isp(q)){
        f=1;
    }
    if(f==1){
        cout<<"YES"<<endl;
    }else{
         cout<<"NO"<<endl;
    }
  }
  return 0;
}