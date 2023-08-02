// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a=5;
    int b=7;
    int c=0;
    for(int i =1; i<=a;i++){
        for(int j =1; j<=b;j++){
            printf("%d ",c+1);
            c++;
            if(j==b){
                printf("\n");
            }
        }
    }


    return 0;
}