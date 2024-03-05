#include <stdio.h>

int main() {
    int x,c1=0,c2=0;
    scanf("%d", &x);
    int a=4;
    int b=x-4;
    for(int i=0 ;i<x;i++){
        for (int i = 2; i <= a / 2; i++) {
            if (a % i == 0) {
                c1 = 1;
                break;
            }
        }
        for (int i = 2; i <= b / 2; i++) {
            if (b % i == 0) {
                c2 = 1;
                break;
            }
        }
        if(c1==0 || c2==0 ){
            a++;
            b--;
            c1=0;
            c2=0;
        }else{
            break;
        }
    }
printf("%d %d",a,b);
    return 0;
}