#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>v;
    v.push_back(80);
    v.push_back(20);
    v.push_back(300);
    v.push_back(40);
    v.push_back(50);
    v.push_back(60);
    v.push_back(70);
    sort(v.begin(),v.end());
    vector<int>::iterator itr=v.begin();

    int x=*(itr);
    for(int i=0;i<v.size();i++){
        itr++;
        cout<<x<<endl;
    }
  cout << x;
  return 0;
}