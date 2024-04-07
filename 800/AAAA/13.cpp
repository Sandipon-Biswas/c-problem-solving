#include <bits/stdc++.h>
#define _d(x) cout<<#x<< " "<<x<<endl;
#define _p(x) cout<<x<<endl;
#define _y() cout<<"YES"<<endl;
#define _n() cout<<"NO"<<endl;
using namespace std;
void _v(vector<int> v1){cout<<"{ "; for(int i : v1){cout<<"" <<i<<" "<<"";}cout<<"}";}


int main()
{
    string a,b;
    cin>>a;
    b="";
    for(int i=0;i<a.length();i++){
        if(a[i]=='W'&& a[i+1]=='U' && a[i+2]=='B'){
            i=i+2;
            continue;
        }else{
            b+=a[i];
            if(a[i+1]=='W'&& a[i+2]=='U' && a[i+3]=='B'){
            b+=" ";
            }
        }
    }
    cout<<b;
  return 0;
}