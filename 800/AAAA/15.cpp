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
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }

    int c=0;
    int d=0;
for(int j=0;j<n;j++){
    for(int i=0;i<n;i++){
        if(d!=i  ){
            if(v[d].first==v[i].second){
                c++;
            }
       }
       
    }
     d++;
}


   _p(c);
  return 0;
}