#include <bits/stdc++.h>

using namespace std;

int main()
{
 int tt;
 cin>>tt;
 while(tt--){
    int n;
 cin>>n;
 vector<int>v;
 int c=0;
 int i=0;
 while (c<n)
 {
    int x=i;
    if(i%3!=0 && i%10!=3){
        v.push_back(i);
        c++;
    }
    i++;
 }
//  for(int i=0;i<v.size();i++){
//     cout<<v[i]<<endl;
//  }
  cout <<v[v.size()-1] <<endl;
 }
  return 0;
}