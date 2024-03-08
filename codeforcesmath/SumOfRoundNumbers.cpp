#include<bits/stdc++.h>
using namespace std;
int len(int k){
    string s=to_string(k);
    return s.length();

}
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
    cin>>x;
    int y=x;
    int l=len(x);
    vector<int>v;
    int m=1;
    for(int i=0;i<l;i++){
        int d=y%10;
        if(d!=0){
            
            int h=d*m;
            v.push_back(h);
        }
        y=y/10;
        m*=10;
    }
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
     cout<<endl;
    }
    return 0;
}