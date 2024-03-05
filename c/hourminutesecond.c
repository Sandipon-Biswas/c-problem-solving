// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a,h,m,s;
    printf("Enter second ");
    scanf("%d",&a);
    h=(int)(a/3600);
    m=(int)((a)-(h*3600))/60;
    s=a-h*3600-m*60;
    printf("the hour %d \n the minute is %d \n the second is %d",h,m,s);
    return 0;
}