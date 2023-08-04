// Online C compiler to run C program online
#include <stdio.h>

int main() {
int i;
float a,s=1.0,j=2.0;

for(i=3;i<=7;i=i+2){
    a=((float)i)/j;
    s+=a;
    j*=2;
}