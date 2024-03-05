// Online C compiler to run C program online
#include <stdio.h>

int main() {
int arr[]={3,5,2,6,7,3,5,12,3,8};
int l =sizeof(arr)/sizeof(arr[0]);
int max =0;
int p=0;
for (int a = 0;a<l;a++){
    if(max<arr[a]){
        max=arr[a];
        p=a;
    }
}
printf("the max  %d and the positon %d",max,p);