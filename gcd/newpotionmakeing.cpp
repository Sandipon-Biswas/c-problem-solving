#include <bits/stdc++.h>
using namespace std;

int main()
{
   int tt;
   cin>>tt;
   while(tt--){
    int k;
    cin>>k;
    int w=100-k;
    int g=__gcd(k,w);
    cout<<(k+w)/g<<endl;
   }
  return 0;
}