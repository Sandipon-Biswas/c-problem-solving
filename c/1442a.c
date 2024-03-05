#include <stdio.h>

int main() {
    int x,i;
    scanf("%d",&x);
    for (i=0;i<x;i++){
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        if(a+b==c){
            printf("YES\n");            
        }else if(b+c==a){
            printf("YES\n");            
        }else if(c+a==b){
            printf("YES\n");            
        }else{
            printf("NO\n");
        }
    }

    return 0;
}