#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--){
    int x;
    cin>>x;
    vector<int>v(x);
    for(int i=0;i<x;i++){
        cin>>v[i];
    }
    int f=0;
    int p=1;
     for(int i=0;i<x;i++){
        int q=sqrt(v[i]);
        if(q*q!=v[i]){
             f=1;
            break;
           
        }
    }
    
    if(f==0){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
  }
  return 0;
}