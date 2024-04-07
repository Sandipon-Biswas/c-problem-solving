#include <bits/stdc++.h>
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
    for(int i=1;i<=n;i++){
        for(int j=0;j<n;j++){
            if(v[j]==i){
                cout<<j+1<<" ";
                break;
            }
        }
    }
  return 0;
}