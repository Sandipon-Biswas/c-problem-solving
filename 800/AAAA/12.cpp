#include <bits/stdc++.h>
#define _d(x) cout<<#x<< " "<<x<<endl;
#define _p(x) cout<<x<<endl;
#define _y() cout<<"YES"<<endl;
#define _n() cout<<"NO"<<endl;
using namespace std;
void _v(vector<int> v1){cout<<"{ "; for(int i : v1){cout<<"" <<i<<" "<<"";}cout<<"}";}


int main()
{
    int x,y;
    cin>>x>>y;
  

   int c=0;
   while(x>00 && y>0){
    c++;
    x--;
    y--;
   }



    if(c%2==0){
        cout<<"Malvika"<<endl;
    }else{
        cout<<"Akshat"<<endl;
    }
  return 0;
}