
#include <bits/stdc++.h>
using namespace std;
int main()
{
string n;
int s=0;
cin >> n;
for(int i=0;i<n.size() ;i++){
  if(islower(n[i])){
     s=s+(toupper(static_cast<int>(n[i]))); 
  }else if(isupper(n[i])){
    s=s-(tolower(static_cast<int>(n[i])));   
  }  
}
cout << s ;


}