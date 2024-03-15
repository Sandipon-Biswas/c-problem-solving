#include <bits/stdc++.h>
using namespace std;
#define ll long long
// void sieve(int n){
//     int prime[n+3];
//     memset(prime,0,sizeof(prime));

// }
int main()
{
   int a[10000]={0};
   for(ll i=2;i<=10000;i++){
        if(a[i]==0){
            for(int j=2;i*j<=10000;j++){
                a[i*j]=1;
            }
        }
   }
    for (ll i = 2; i <= 100; i++)
    {
        if (a[i]==0)
        {
           cout<<i<<endl;
        }
        
    }
    
  cout << "hello";
  return 0;
}