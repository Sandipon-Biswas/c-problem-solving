#include <stdio.h>

int main() {
    int a,b,big,small,c;
    scanf("%d%d",&a,&b);
    if(a>b){
        big=a;
        small=b;
    }else{
        big=b;
        small=a;
    }
    c=(big-small)/2;
    printf("%d %d",small,c);
    return 0;
}