#include <stdio.h>

int main() {
int Arr[] = { 5, 7, 9, 10, 13 };
int sum=0;
float r;
for(int a=0;a<sizeof(Arr)/sizeof(Arr[0]);a++){
    if(Arr[a]%2!=0){ 

    sum=sum+Arr[a];
    }

}
printf("odd sum is %d",sum);