#include <bits/stdc++.h>
#define _d(x) cout<<#x<< " "<<x<<endl;
#define _p(x) cout<<x<<endl;
#define _y() cout<<"YES"<<endl;
#define _n() cout<<"NO"<<endl;
using namespace std;
void _v(vector<int> v1){cout<<"{ "; for(int i : v1){cout<<"" <<i<<" "<<"";}cout<<"}";}


int main()
{
    int n,m;
    cin>>n>>m;
    int t=n-1;
    vector<int>v(m);
    for(int i=0;i<m;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());

    int r=v[n-1]-v[0];
    for(int i=1;i<(m-t);i++){
        if(v[i+t]-v[i]<r){
            r=v[i+t]-v[i];
        }
    }
    cout<<r<<endl;
  return 0;
}