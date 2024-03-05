// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    for(int i =1;i<=a;i++){
        printf("%d %d %d \n",i,i*i,i*i*i);
    }


    return 0;
}