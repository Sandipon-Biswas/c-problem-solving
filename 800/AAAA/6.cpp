#include <bits/stdc++.h>
// #define int long long
#define _d(x) cout<<#x<< " "<<x<<endl;
#define _p(x) cout<<x<<endl;
#define _y() cout<<"YES"<<endl;
#define _n() cout<<"NO"<<endl;
using namespace std;
void _v(vector<int> v1){cout<<"{ "; for(int i : v1){cout<<"" <<i<<" "<<"";}cout<<"}";}


int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int r=0;
    int c=0;
    int s=accumulate(v.begin(),v.end(),0);
    
    while(r<=s){
        r+=v.back();
        c++;
        v.pop_back();
        s=accumulate(v.begin(),v.end(),0);
    }
    cout<<c<<endl;
  return 0;
}