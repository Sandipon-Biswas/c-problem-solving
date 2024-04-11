#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

int tt;
cin>>tt;
while(tt--){

  ll n,k;
 cin>>n>>k;
 vector<int>v(n);
 for(int i=0;i<n;i++){
    cin>>v[i];
 }
 for(int i=1;i<=k;i++){
    if(i%2!=0){
        if (v[0]==1) {
        v.erase(v.begin());
        }else{
            v[0]=v[0]-1;
        }
    }else{
        int k=v.size()-1;
        if (v[k]==1) {
        v.pop_back();
        }else{
            v[k]=v[k]-1;
        } 
    }
 }

cout<<n-v.size()<<endl;







}


  return 0;
}