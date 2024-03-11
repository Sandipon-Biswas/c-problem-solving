#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  
        ll x;
        ll y;
        cin>>x>>y;
        if(x+0.5>y){
            float z=y;
            cout<<fixed <<setprecision(2) <<z<<endl;
        }else{
            float z=(y -x)- 0.5;
            cout<<fixed <<setprecision(2) << z <<endl;
        }
       
    
  return 0;
}