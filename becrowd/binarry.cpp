#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    vector<int>a={1,2,3,4,5,6,7,8,9};
    int target=5;
    int left=0;
    int right=a.size()-1;
    int f=0;
    int index=-1;
    while(left<=right){
        int mid=left+(left-right)/2;
        if(a[mid]==target){
            f=1;
            index=mid;
            break;
        }else if(target>a[mid]){
            left=mid+1;
        }else{
            right=mid-1;
        }
    }
  
        
    
    
  return 0;
}