#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--){
    string s;
  cin>>s;
  vector<int> v;
  for (int i = 0; i < 4; i++)
  {
    if(s[i]=='0'){
        v.push_back(10);
    }else{
        int z=s[i]-'0';
        v.push_back(z);
    }
  }
  
  int c=1;
  if(v[0]!=1){
    c+=(v[0]-1);
  }
  for (int i = 1; i < 4; i++)
  {
    int a=v[i-1];
    int b=v[i];
    c+=(max(a,b)-min(a,b));
    c++;
  }
  
  
  cout<<c<<endl;
  }
  
  
  return 0;
}