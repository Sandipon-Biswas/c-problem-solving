#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s,s2,s3;
  cin>>s;
  transform( s.begin(),s.end(),s.begin() ,::tolower);
  s2=".";
  s3="";
  for(int i=0;i<s.length();i++){
   if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'){
        continue;
    }else{
        s2+=s[i];
        s2+='.';
        
    }
  }
  for(int i=0;i<(s2.length()-1);i++){
    s3+=s2[i];
  }
cout<<s3<<endl;
  return 0;
}