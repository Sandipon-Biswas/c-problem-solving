#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
   int target=9;
   int left=0;
   int right=sizeof(arr)/sizeof(arr[0]) -1;
   int index=-1;
   while(left<=right){
    int mid=left + (right-left)/2;
    if (arr[mid] == target) {
            index = mid;
            break;
    }
    if(arr[mid]<target){
        left=mid+1;
    }else{
        right=mid-1;
    }

   }

    return 0;
}