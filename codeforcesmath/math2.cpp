#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
      int x,y,n;
    cin>>x>>y>>n;
    int c=floor((n-y)/x);
    int k=c*x+y;
    cout<<k<<endl;
  }

    return 0;
}