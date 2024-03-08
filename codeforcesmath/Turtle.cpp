#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int c=0;
    while(n--){
        int x,y,z;
        cin>>x>>y>>z;
        int a[3]={x,y,z};
        int s=accumulate(begin(a),end(a),0);
        if(s>1){
            c++;
        }
    }
    cout<<c<<endl;
}