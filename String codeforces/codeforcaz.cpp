#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ll t;
  cin>>t;
  while(t--){
    string s;
  cin>>s;
  string s1="codeforces";
  int c=0;
  for (int i = 0; i < s1.length(); i++)
  {
    if(s[i]!=s1[i]){
        c++;
    }
  }
  cout<<c<<endl;
  }
        
    
    
  return 0;
}