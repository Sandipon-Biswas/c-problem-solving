#include <bits/stdc++.h>
using namespace std;

void printv(vector<int>v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}

int main()
{
  pair<int,string>p;
  p=make_pair(1,"pair");
  pair<int,string> &p1=p;
  p1.first=5;
  cout<<p.first<<"     "<<p.second<<endl;
  pair<int,int> a[3];
  a[0]={1,2};
  a[1]={2,3};
  a[2]={3,4};
  swap(a[0],a[2]);
//   for(int i=0;i<3;i++){
//     cout<<a[i].first<<"__"<<a[i].second<<endl;
//   }

    vector<int>v;
    int n;
    cin >>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<int>v2=v;
    printv(v2);

  return 0;
}