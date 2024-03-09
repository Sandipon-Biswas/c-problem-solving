#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    // for(auto& x: s){
    //     x=tolower(x);
    // }
    transform(s.begin(),s.end(),s.begin(),::tolower);
    string ss="";
    if(s[0]=='m'){
        ss+='m';
    }else{
        ss+=s[0];
    }
    for(int i=1;i<s.length();i++){
        if(s[i-1]!=s[i]){
            ss+=s[i];
        }
    }
    
    if(ss=="meow"){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    }
    return 0;
}
