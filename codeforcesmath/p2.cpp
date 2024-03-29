#include <bits/stdc++.h>

using namespace std;

int main()
{
   int k;
   cin>>k;
   while (k--)
   {
     int n;
    cin >>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int f=0;
    int in=n-1;
    for (int i = n-2; i >=0 ; i--)
    {
        if(a[i]>9){
            if(a[i]%10>a[in]){
                f=1;
                break;
            }
            if(a[i]/10>a[in]){
                f=1;
                break;
            }
        }else{
                if(a[i]>a[in]){
                f=1;
                break;
            }
        }
        in=in-1;
    }
    
    
  if(f==0){
    cout<<"YES"<<endl;
  }else{
     cout<<"NO"<<endl;
  }
   }
   
  return 0;
}