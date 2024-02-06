#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={5,4,3,2,1};
    for(int i=0;i<5;i++){
        int min=a[i];
        int index=i;
        for(int j=i+1;j<5;j++){
            if(min>a[j]){
                min=a[j];
                index=j;

            }
        }
        int temp=a[index];
        a[index]=a[i];
        a[i]=temp;
    }
    for(int k=0;k<5;k++){
        cout<<a[k]<<endl;
    }
}