#include <stdio.h>

int main() {
int a[5],i,x,j;
for(i=0;i<5;i++){
    printf("Enter any number : \n");
    scanf("%d",&x);
    if(x<=0){
        x=100;
    }
    a[i]=x;
}
for(j=0;j<5;j++){
    printf("The number is :%d \n",a[j]);

    
}
}