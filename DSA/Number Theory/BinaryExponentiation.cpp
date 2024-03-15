#include <bits/stdc++.h>
#define ll long long
using namespace std;
//binary exponentiation
int power(int a,int n,int m){
    int result=1;
    while(n){
        if(n%2==1){
        result=(result*a)%m ;
        n--;
    }else{
        a=(a*a)%m ;
        n/=2;
    }
    }
    return result;
}
int main()
{
  int n;
  cin>>n;
 
  cout<<power(8,n,10)<<endl;
  return 0;
}