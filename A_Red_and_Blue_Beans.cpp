#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--){
    
    int a[3];
    for(int i=0;i<3;i++){
        cin>>a[i];
    }
    int mi=min(a[0],a[1]);
    int mx=max(a[0],a[1]);
    bool ttt= mx-mi<=a[2]*mi;
    if(ttt){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
  }
  return 0;
}