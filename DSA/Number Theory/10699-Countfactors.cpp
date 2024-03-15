#include <bits/stdc++.h>
#define ll long long
using namespace std;
int countfactor(ll n){
    ll r=0;
    for (int i = 2; i*i <= n; i++)
    {
        if(n%i==0){
            int c=0;
            while(n%i==0){
                c++;
                n/=i;
            }
            r++;
        }
    }
    if(n>1){
        r++;
    }
    return r;
    
}
int main()
{
    while(true){
        ll n;
    cin>>n;
    if(n==0)break;
  cout <<n<<" : "<< countfactor(n)<<endl ;
    }
  return 0;
}