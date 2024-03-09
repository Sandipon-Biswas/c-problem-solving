#include <bits/stdc++.h>
using namespace std;
bool isp(int n){
    if(n==2)return true;
    if(n==1 || n%2==0)return false;
    for (int i = 3; i <= sqrt(n); i+=2)
    {
        if(n%i==0)return false;
    }
    return true;
}
bool final(int n){
    int c=0;
    for (int i = 2; i <= n/2; i++)
    {
        if(n%i==0 && isp(i) ){
            c++;
        }
    }
    return c==2;
    
}
int main()
{
  int n;
  cin>>n;
  int f=0;
  for (int i = 1; i <= n; i++)
  {
    if(final(i)){
        f++;
    }
  }
  cout<<f<<endl;
  return 0;
}