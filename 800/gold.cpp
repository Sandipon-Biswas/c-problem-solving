#include <bits/stdc++.h>
using namespace std;
int main()
{
   int tt;
   cin>>tt;
   while(tt--){
 int n,x;
    cin>>n>>x;
    int k=n;
    vector<int>v(n);
    int s=0;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        s=s+k;
        v[i]=k;
    }

    if(s==x){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
        int sum=0;
        int c=0;
        int i=0;
        int ll=v.size()-1;
        while (c!=n)
        {
            if(sum+v[i]!=x){
                cout<<v[i]<<" ";
                sum=sum+v[i];
                c++;
                i++;
            }else{
                cout<<v[ll]<<" ";
                sum=sum+v[ll];
                c++;
                ll--;            
            }
        }
        
    }


   }
    
  return 0;
}