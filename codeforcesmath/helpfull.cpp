#include<bits/stdc++.h>
using namespace std;
int main(){
    string x,y;
    cin>>x;
    vector<string>z;
    vector<int>in;
    for(int i=0;i<x.length();i++){
        if(x[i]!='+'){
            z.push_back(string(1,x[i]));
        }
    }
    for(int i=0;i<z.size();i++){
        in.push_back(stoi(z[i]));//convert string into intiger
    }
    sort(in.begin(),in.end());
    for(int i=0;i<in.size()-1;i++){
       cout<<in[i]<<"+";
    }
    cout<<in[in.size()-1]<<endl;
    return 0;
}