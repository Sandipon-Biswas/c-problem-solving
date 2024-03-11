#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ll x,y;
  cin>>x>>y;
  int c=0;
  while(x--){
    int n;
    cin>>n;
    if(n%y==0){
        c++;
    }
  }
        
    
    cout<<c<<endl;
  return 0;
}