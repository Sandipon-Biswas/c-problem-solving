#include <stdio.h>
void main(){
printf("Enter any number  :");
int x,count=0,rev=0;
scanf("%d",&x);
while(x!=0){
    int i=x%10;
    rev=rev*10+i;
    x=x/10;
}
printf("%d",rev);
}