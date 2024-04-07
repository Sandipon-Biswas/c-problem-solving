#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
  while (t--)
  {
    string s;
    cin>>s;
    int ss=s.length();
    //cout<<ss<<endl;
    if(ss<11){
        cout<<s<<endl;
    }else{
        cout<<s[0] << ss-2<<s[ss-1]<<endl;
    }

  }
  
  return 0;
}