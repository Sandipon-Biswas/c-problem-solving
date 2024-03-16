//A. Destroying Bridges solution 1944/problem/A
// There are n
//  islands, numbered 1,2,…,n
// . Initially, every pair of islands is connected by a bridge. Hence, there are a total of n(n−1)2
//  bridges.

// Everule lives on island 1
//  and enjoys visiting the other islands using bridges. Dominater has the power to destroy at most k
//  bridges to minimize the number of islands that Everule can reach using (possibly multiple) bridges.

// Find the minimum number of islands (including island 1
// ) that Everule can visit if Dominater destroys bridges optimally.
#include <bits/stdc++.h>

using namespace std;

int main()
{
  int tt;
  cin>>tt;
  while (tt--)
  {
    int n,k;
  cin>>n>>k;
  int i=n-1;
  if(k>=i){
    cout<<1<<endl;
  }else{
    cout<<n<<endl;
  }
  }
  
  return 0;
}
