#include <stdio.h>

int main() {
int a,b,temp;
printf("Enter a and b \n");
scanf("%d%d",&a,&b);
if(b>a){
    temp=b;
    b=a;
    a=temp;
}
if(a%b==0){
    printf("Multiplied!");
}else{
    printf("not multipled!");
}
    return 0;
}