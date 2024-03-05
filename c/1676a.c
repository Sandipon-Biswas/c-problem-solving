#include <stdio.h>

int main() {
    int h;
    scanf("%d",&h);
    while(h--){
        int a;
        scanf("%d",&a);
        int c=0,b;
        int r1=0,r2=0;
        for(int i=0;i<3;i++){
          r1=r1+(a%10);
          a=a/10;
        }
        for(int i=0;i<3;i++){
          r2=r2+(a%10);
          a=a/10;        
        } 
        if(r1==r2){
            printf("YES\n");
        }else{
              printf("NO\n");          
        }
    }
    return 0;
}