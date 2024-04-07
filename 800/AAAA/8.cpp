#include <bits/stdc++.h>
#define _d(x) cout<<#x<< " "<<x<<endl;
#define _p(x) cout<<x<<endl;
#define yes() cout<<"YES"<<endl;
#define no() cout<<"NO"<<endl;
using namespace std;
void _v(vector<int> v1){cout<<"{ "; for(int i : v1){cout<<"" <<i<<" "<<"";}cout<<"}";}


int main()
{
    string s;
    cin>>s;
    int f=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='7'||s[i]=='4'){
            continue;
        }else{
             f=1;
            break;
           
        }
    }
    int  t=stoi(s);
    if(t%47==0||t%4==0||t%7==0||t%44==0||t%74==0||t%43==0||t%444==0||t%744==0||t%474==0||t%447==0||t%774==0||t%477==0||t%777==0||t%799==0){
        f=0;
    }
    if(f==0){
        yes();
    }else{
        no();
    }
  return 0;
}