// Online C compiler to run C program online
#include <stdio.h>

int main() {
printf("Enter any nunber : ");
int a,i;
scanf("%d",&a);
for(i=1;i<=a;i++){
    if(a%i==0){
        printf("The divider %d \n",i);
    }
}
}