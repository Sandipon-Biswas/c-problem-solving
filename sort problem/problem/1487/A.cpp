#include <bits/stdc++.h>
using namespace std;
void solve(){
    int x;
    cin>>x;
    int a[x];
    for(int i=0;i<x;i++){
        cin>>a[i];
    }
    int small=a[0];
    int c=x;
    for(int i=0;i<x;i++){
        if(small>a[i]){
            small=a[i];
        }
    }
    for(int i=0;i<x;i++){
        if(small==a[i]){
            c--;
        }
    }
    cout<<c<<endl;
}
int main(){
    int a;
    cin>>a;
    while(a--){
        solve();
    }
    return 0;
}