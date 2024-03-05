#include <bits/stdc++.h>
using namespace std;
void solve(){
  int x;
  cin>>x;
  int arr[x];
  for(int i=0;i<x;i++){
      cin>>arr[i];
  }
  int sum=0;
  for(int i=0;i<x;i++){
      if(arr[i]>0){
          sum+=arr[i];
      }else{
          sum=sum+(-1*(arr[i]));
      }
  }
  cout<<sum<<endl;
}
int main(){
    int a;
    cin>>a;
    while(a--){
        solve();
    }
    return 0;
}