// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a;
    float sum=1.0,b;
    for(a=2;a<=50;a++){
        b=(1.0/a) ;
        sum=sum+b;
    }

    printf("The result is %.2f",sum);

    return 0;
}