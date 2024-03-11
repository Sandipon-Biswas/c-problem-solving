#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
 ll t;
 cin>>t;
 while(t--){
     ll x; cin>>x;
  int f=x%10;
  
  while(x>=10){
    x=x/10;
  }
  int l=x;
  cout<<f+l<<endl;
 }
        
    
    
  return 0;
}