#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >>t;
  while (t--)
  {
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b>9 or a+c>9 or b+c>9 or c+a>9 ){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
  }
  
  return 0;
}