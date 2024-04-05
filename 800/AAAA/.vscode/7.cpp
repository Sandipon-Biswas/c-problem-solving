#include <bits/stdc++.h>
// #define int long long
#define _d(x) cout<<#x<< " = "<<x<<endl;
#define _p(x) cout<<x<<endl;
#define _y() cout<<"YES"<<endl;
#define _n() cout<<"NO"<<endl;
using namespace std;
void _v(vector<int> v1){cout<<"{ "; for(int i : v1){cout<<"" <<i<<" "<<"";}cout<<"}";}
void _vc(vector<char> v1){cout<<"{ "; for(char i : v1){cout<<"" <<i<<" "<<"";}cout<<"}";}


int main()
{
  string s;
  cin>>s;
 int l=s.length();
 int f=0;
 int c=0;
 char a[]={'h','e','l','l','o'};
 for(int i=0;i<l;i++){
    if(s[i]=='h'){
        c+=1;
        break;
    }else{
        c+=1;
    }
    if(i==(l-1)){
        f=1;
    }
 }
 if(c==(l)){
    f=1;
 }
 for(int i=c;i<l;i++){
    if(s[i]=='e'){
        c+=1;
        break;
    }else{
        c+=1;
    }
    if(i==(l-1)){
        f=1;
    }
 }
  if(c==(l)){
    f=1;
 }
 for(int i=c;i<l;i++){
    if(s[i]=='l'){
        c+=1;
        break;
    }else{
        c+=1;
    }
    if(i==(l-1)){
        f=1;
    }
 }
  if(c==(l)){
    f=1;
 }
  for(int i=c;i<l;i++){
    if(s[i]=='l'){
        c+=1;
        break;
    }else{
        c+=1;
    }
    if(i==(l-1)){
        f=1;
    }
 }
  if(c==(l)){
    f=1;
 }
  for(int i=c;i<l;i++){
    if(s[i]=='o'){
        c+=1;
        break;
    }else{
        c+=1;
    }
    if(i==(l-1)){
        f=1;
    }
 }
 if(f==0){
    _y();
 }else{
    _n();
 }
  return 0;
}