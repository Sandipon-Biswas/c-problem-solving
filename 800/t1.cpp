#include <bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--){
     int n;
  cin>>n;
  string s;
  
  cin>>s;
  string s2="";
  set<string>ss;
  
  s2+=s[0];
  for(int i=1;i<n;i++){
    if(s[i-1]!=s[i]){
        s2+=s[i];
    }
  }

for(int i=0;i<s2.length();i++){
    ss.insert(s2.substr(i,1));
  }

  if(s2.length()==ss.size()){
    cout<<"YES"<<endl;
  }else{
    cout<<"NO"<<endl;
  }
 }
 
  return 0;
}