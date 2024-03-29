#include <bits/stdc++.h>

using namespace std;

int main()
{


int t;
cin>>t;
while(t--){
    
    int n;
    cin>>n;
    string one="##\n##";
    string a="##";
    string b="..";
    string r="";

    for(int i=1;i<=n;i++){
        int e=i;
        int s = (i % 2 != 0) ? 1 : 2; 
        int s2 = (i % 2 != 0) ? 1 : 2; 
        int op=n;
        int op2=n;
        while (op--)
        {
            if(s%2!=0){
                r=r+a;
            }else{
                r=r+b;
            }
            s++;
        }
        r=r+"\n";
           while (op2--)
        {
            if(s2%2!=0){
                r=r+a;
            }else{
                r=r+b;
            }
            s2++;
        }
        if(e!=n){
            r=r+"\n";
        }
        
    }
    cout<<r<<endl;
        
    
}    

  
  return 0;
}