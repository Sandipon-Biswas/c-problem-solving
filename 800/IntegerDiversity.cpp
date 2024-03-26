#include <bits/stdc++.h>
using namespace std;

int main()
{
  int ttt;
  cin>>ttt;
  while (ttt--)
  {
     int x;
  cin>>x;
  int a[x];
  for (int i = 0; i < x; i++)
  {
    cin>>a[i];
  }
  int c[100]={0};
   for (int i = 0; i < 100; i++)
  {
    for(int j=0;j<x;j++){
        if(abs(a[j])==i){
            c[i]+=1;
        }
    }
  }
  int r=0;
  if(c[0]>1){
    r++;
  }
  for (int i = 1; i < 100; i++)
  {
    if(c[i]==1){
        r+=1;
    }else if(c[i]>=2){
        r+=2;
    }
  }
  cout<<r<<endl;
  }
  
  
  return 0;
}