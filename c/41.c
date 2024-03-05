// Online C compiler to run C program online
#include <stdio.h>

int main() {
int a;
printf("Enter a number : ");
scanf("%d",&a);
int x=a*3;
for(int i=1;i<=x ;i=i+3){
    printf("%d,%d,%d \n",i,i+1,i+2);
}
    return 0;
}