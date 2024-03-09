#include <bits/stdc++.h>
using namespace std;
#define ll long long 
bool isp(ll n){
    if(n==2)return true;
    if(n==1 || n%2==0)return false;
    for (int i = 3; i <=sqrt(n) ; i+=2)
    {
        if(n%i==0)return false;
    }
    return true;
    
}
int main()
{
  ll x;
  cin>>x;
  while(x--){
    int f=0;
    ll b;
    cin>>b;
    ll sq=sqrt(b);
    if(sq*sq==b && isp(sq)){
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