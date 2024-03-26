// A. Era
// time limit per test1 second
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// Shohag has an integer sequence a1,a2,…,an
// . He can perform the following operation any number of times (possibly, zero):

// Select any positive integer k
//  (it can be different in different operations).
// Choose any position in the sequence (possibly the beginning or end of the sequence, or in between any two elements) and insert k
//  into the sequence at this position.
// This way, the sequence a
//  changes, and the next operation is performed on this changed sequence.



#include <bits/stdc++.h>
using namespace std;

int main()
{
 int t;
 cin>>t;
 while(t--){
     int x;
  cin>>x;
  int a[x];
  for (int i = 0; i < x; i++)
  {
    cin>>a[i];
  }
   int c=0;
  for (int i = 0; i < x; i++)
  {
    if(a[i]>(i+c+1)){
        c=c+(a[i]-(i+1+c));
    }
  }
  cout<<c<<endl;
 }
  return 0;
}