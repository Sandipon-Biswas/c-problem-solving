#include <bits/stdc++.h>
#define _d(x) cout<<#x<< " "<<x<<endl;
#define _p(x) cout<<x<<endl;
#define _y() cout<<"YES"<<endl;
#define _n() cout<<"NO"<<endl;
using namespace std;
void _v(vector<int> v1){cout<<"{ "; for(int i : v1){cout<<"" <<i<<" "<<"";}cout<<"}";}


int main()
{
    int a[5][5];
    int r=1;
    int c=1;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>a[i][j];
        }
    }
    int f=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(a[i][j]==1){
                r=i;
                c=j;
                f=1;
                break;

            }
        }
        if(f==1){
            break;
        }
    }  
 
    int rr=abs(r-2)+abs(c-2);
    _p(rr);
  return 0;
}