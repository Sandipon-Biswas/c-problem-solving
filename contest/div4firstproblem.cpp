#include <bits/stdc++.h>
using namespace std;
void solve(){
    
    string s;
    cin>>s;
    int x=0;
    int y=0;
    for(int i=0;i<5;i++){
        if(s[i]=='A'){
            x++;
        }else{
            y++;
        }
    }
    if(x>y){
        cout<<"A"<<endl;
    }else{
        cout<<"B"<<endl;
    }
    
}
int main(){
    int a;
    cin>>a;
    while(a--){
        solve();
    }
    return 0;
}