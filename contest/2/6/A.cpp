#include <bits/stdc++.h>
using namespace std;
void solve(){
    int y;
    cin>>y;
    int z=y;
    string x;
    cin>>x;
    int i=0;
    while(x[i]=='W'){
        i++;
        z=z-1;
    }
    
     int j=y-1;
    while(x[j]=='W'){
        j--;
        z=z-1;
    }   
     cout<<z<<endl;
}
int main(){
    int a;
    cin>>a;
    while(a--){
        solve();
    }
    return 0;
}