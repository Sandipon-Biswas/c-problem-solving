#include <iostream>
using namespace std;
void solve(){
    int a,b,sum=0;
  cin >>a>>b;
  if(a%2==0){
      a++;
  }
  while(b--){
    sum=sum+a;
    a=a+2;
  }
  cout<<sum<<endl;
}
int main() {
    int x;
    cin>>x;
    while(x--){
        solve();
    }
    return 0;
}