#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    int c=max(x,y);
    string p[7]={"","1/1","5/6","2/3","1/2","1/3","1/6"};
    cout<<p[c]<<endl;
    return 0;
}