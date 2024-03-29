#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
  int n;
  cin>>n;
  vector<int>v;
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x);
  }
  int s=0;
  int d=0;
  int i=2;
  while (!v.empty())
  {
    int f=v[0];
    int l=v[v.size()-1];
    if(i%2==0){
        if(f>l){
            s+=f;
            v.erase(v.begin());
        }else{
            s+=l;
            v.pop_back();
        }
    }else{
        if(f>l){
            d+=f;
            v.erase(v.begin());
        }else{
            d+=l;
            v.pop_back();
        }
    }
    i++;
  }
  cout<<s<<" "<<d<<endl;
  return 0;
}