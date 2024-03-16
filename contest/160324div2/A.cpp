#include <bits/stdc++.h>

using namespace std;

int main()
{
  int tt;
  cin>>tt;
  while(tt--){
    int n;
  cin>>n;
  if(n%2==1){
    cout<<"NO"<<endl;
  }else{
     cout<<"YES"<<endl;
     string s="";
     int t=n/2;
     while(t--){
        s=s+"BAA";
     }
     cout<<s<<endl;
  }
  }

  return 0;
}