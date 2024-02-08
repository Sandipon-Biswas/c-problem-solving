#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[]={6,5,4,3,2,1};
    for(int i=0;i<6;i++){
        int min=a[i];
        int inx=i;
        for(int j=i+1;j<6;j++){
            if(min>a[j]){
                min=a[j];
                inx=j;
            }
        }
        int temp=a[i];
        a[i]=a[inx];
        a[inx]=temp;
    }
    for(int k=0;k<6;k++){
        cout<<a[k]<<endl;
    }
    return 0;
}