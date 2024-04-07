#include <bits/stdc++.h>
#define _d(x) cout<<#x<< " "<<x<<endl;
#define _p(x) cout<<x<<endl;
#define _y() cout<<"YES"<<endl;
#define _n() cout<<"NO"<<endl;
using namespace std;
void _v(vector<int> v1){cout<<"{ "; for(int i : v1){cout<<"" <<i<<" "<<"";}cout<<"}";}


int main()
{
 string s,ss;
 cin>>s;
 vector<int>v;
 for(int i=0;i<s.length();i++){
    if(s[i]!='+'){
        int x=s[i]-'0';
        v.push_back(x);
    }
 }
 sort(v.begin(),v.end());
 //_v(v);
 for(int i=0;i<v.size();i++){
    cout<<v[i];
    if(i<(v.size()-1)){
        cout<<"+";
    }
 }
 cout<<endl;
  return 0;
}