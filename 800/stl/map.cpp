#include <bits/stdc++.h>

using namespace std;

int main()
{
    // pair<int,int>p=make_pair(10,20);
    // cout<<p.first<<p.second<<endl;
    unordered_map<int,int>mp;
    // mp[4]=400;
    // mp[3]=300;
    mp.insert(make_pair(12,122));
    // mp[7]=70;
    // mp[30]=234;
    mp.insert(make_pair(120,123));
    mp.insert(make_pair(120,123234));
    mp.insert(make_pair(1,1));
    mp.insert(make_pair(12,2));
    mp.insert(make_pair(12,2));
     mp[12]=000;

    for(auto it =mp.begin();it!=mp.end();it++ ){
      cout<<it->first<<"___"<<it->second<<endl;
    }
  cout << "hello";
  return 0;
}