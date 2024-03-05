// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int p,v,a[10]={1,2,3,4,6,7,8};// Write C 
    p=5-1;
    v=5;
    for(int i=7-1;i>=p;i--){
        a[i+1]=a[i];
    }
    a[p]=v;
    for(int i =0;i<=7;i++){
        printf("%d \n",a[i]);
    }
    return 0;
}