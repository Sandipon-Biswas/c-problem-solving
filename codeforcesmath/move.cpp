#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,mx,mi;
    cin>>x>>y;
    mi=min(x,y);
    mx=max(x,y);
    int c=(mx-mi);
    while(c%10!=0){
        c++;
    }
    int r=c/10;
    cout<<r<<endl;
    }
    return 0;
}