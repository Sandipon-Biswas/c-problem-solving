#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
ll t;
cin>>t;
while (t--)
{
      ll a,b,s;
  cin>>a>>b>>s;
  ll a1[a];
  ll a2[b];
  for(int i=0;i<a;i++){
    cin>>a1[i];
  }
    for(int i=0;i<b;i++){
    cin>>a2[i];
  }
  ll r=0;
  for(int i=0;i<a;i++){
    for(int j=0;j<b;j++){
        if(a1[i]+a2[j]<=s){
            r++;
        }
    }
  }
  cout<<r<<endl;
}


        
    
    
  return 0;
}