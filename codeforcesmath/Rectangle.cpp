#include <bits/stdc++.h>

using namespace std;

int main()
{
 int t;
 cin>>t;
 while(t--){
    int x,y;
    cin>>x>>y;
    if(x%2==1 && y%2==1){
        cout<<"NO"<<endl;
    }else if(x%2!=0 && y/2==x){
        cout<<"NO"<<endl;
    }else if(y%2!=0 && x/2==y){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
 }
  return 0;
}