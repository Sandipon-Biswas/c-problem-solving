#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ll n;
  cin>>n;
  while(n--){
    ll a,b,c;
    cin>>a>>b>>c;
    if(((a+b)==c)){
        cout<<"+"<<endl;
    }else{
        cout<<"-"<<endl;
    }
  }
        
    
    
  return 0;
}