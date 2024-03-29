#include <bits/stdc++.h>
#define ll long long
using namespace std;
//run ctrl+shift+b
int main()
{
  int n;
  cin>>n;
  cout<<n<<endl;
  pair<int,pair<int,int>>p={1,{3,4}};
  cout<<p.second.second<<endl;
  //pair array
  pair<int,int>a[]={{1,2},{3,4},{5,6}};
  cout<<a[2].first<<endl;
  cout<<"vector"<<endl;
  vector<int> v;
  v.push_back(1);
  v.push_back(2);
  vector<pair<int,int>>v2;
  v2.push_back({1,2});
  v2.push_back({3,4});
  v.push_back(2);

  return 0;
}