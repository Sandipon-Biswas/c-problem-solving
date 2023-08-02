// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int b,a=1,sum=0,cunt=-1;
    float r=0.0;
    while(a!=0){
        printf("Enter a Number :");
        scanf("%d",&b);
        sum=sum+b;
        cunt++;
        if(b==0){
            a=0;
        }
    }
    r=(float)sum/cunt;
    printf("The result is %f",r);

    return 0;
}