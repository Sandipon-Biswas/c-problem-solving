// Online C compiler to run C program online
#include <stdio.h>

int main() {
  int Arr[] = { 5, 8, 10, -5, 25 };
int p=0;
int sum=0;
float r;
for(int a=0;a<sizeof(Arr)/sizeof(Arr[0]);a++){
    if(Arr[a]>0){ 
    p++;
    sum=sum+Arr[a];
    }
    r=sum/p;
}
printf("Positive number average is %.3f",r);

    return 0;
}