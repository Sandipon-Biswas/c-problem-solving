#include <bits/stdc++.h>
using namespace std;

int main()
{
  int tt;
  cin>>tt;
  while (tt--)
  {
    int n;
  cin>>n;
  vector<int>v(n);
  for(int i=0;i<n;i++){
    int k;
    cin>>k;
    v[i]=abs(k);
  }
  sort(v.begin(),v.end());

  int u=0;
  int d=0;
  int f=0;
  for(int i=1;i<n;i++){
    if(v[i-1]==v[i]){
        f++;
    }else{
        if(f>0){
            d++;
        }else{
            u++;
        }
        f=0;
    }
  }
    if (f > 0) {
        d++;
    } else {
        u++;
    }
int r=d*2 + u;
if(n==1){
    r=1;
}else if(n==2 && v[0]==0&&v[1]==0){
    r=1;
}else if(n==2 && v[0]!=v[1]){
    r=2;
}else{
  if(v[0]==0&&v[1]==0){
    r=r-2;
}else if(v[0]==0){
    r=r-1;
}
}

  cout<<r<<endl;
  }
  

  return 0;
}