#include <bits/stdc++.h>

using namespace std;

int main()
{
  int tt;
  cin>>tt;
  while(tt--){
    int n;
  cin>>n;
  int flag=1;
  vector<int>v(n);
  int two=0;
  for (int i = 0; i < n; i++)
  {
    cin>>v[i];
    if(v[i]==2){
        two++;
    }
  }
  int two2=0;
  for (int i = 0; i < n; i++)
  {
    
    if(v[i]==2){
        two2++;
    }
    if(two2*2==two){
        cout<<i+1<<endl;
        flag=0;
        break;
    }
    

  } 
  if(flag==1){
    cout<<-1<<endl;
  } 
  }
  return 0;
}