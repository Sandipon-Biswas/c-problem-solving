#include<bits/stdc++.h>
using namespace std;
int main() {
    int q;
    cin>>q;
    while(q--){
    int n;
    cin>>n;
    string s;
    cin >> s;
    for(auto& x: s){
        x=tolower(x);
    }
    string a,b,c,d;
    int e=0,f=0,g=0,h=0;
    for(int i=0;i<s.length();i++){
        if(s[i]!='m'){
            e=i-1;
            break;
        }
    }
    for(int i=e+1;i<s.length();i++){
        if(s[i]!='e'){
            f=i-1;
            break;
        }
    }
    for(int i=f+1;i<s.length();i++){
        if(s[i]!='o'){
            g=i-1;
            break;
        }
    }
    h=s.length()-1;
    
    if(s[e]=='m'&&s[f]=='e'&&s[g]=='o'&&s[h]=='w'){
        cout<<"YES"<<endl;
    }else{
           cout<<"NO"<<endl;
    }
    }
    return 0;
}
