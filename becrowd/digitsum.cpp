#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ll n;
  cin>>n;
  while(n--){
    ll x;
    cin>>x;
    int sum=0;
    while (x!=0)
    {
        sum+=(x%10);
        x=x/10;
    }
    cout<<sum<<endl;
    
  }
        
    
    
  return 0;
}