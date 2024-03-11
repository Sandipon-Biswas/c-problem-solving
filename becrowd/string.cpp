#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ll t;
  while(t--){
    ll n;
  cin>>n;
  string s;
  s=to_string(n);
  int c=0;
  for (int i = 0; i < s.size(); i++)
  {
    /* code */
    if(s[i]=='4'){
        c++;
    }
  }
  cout<<c<<endl;
  }
  
        
    
    
  return 0;
}