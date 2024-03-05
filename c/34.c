// Online C compiler to run C program online
#include <stdio.h>

int main() {
int a=2;
int b=10;
if(a<b){
    int temp =a;
    a=b;
    b=temp;
}
int sum=0;
for(int i =2;i<=a;i++){
    if(i%2!=0){
        printf("the odd are %d \n",i);
        sum+=i;
    }

}
printf("the sum, is %d \n",sum);
    return 0;
}