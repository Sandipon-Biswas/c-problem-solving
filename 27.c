// Online C compiler to run C program online
#include <stdio.h>

int main() {
  int Arr[] = { 1, 2, -3, 4, -5,4 };
int p=0;
int n=0;
for(int a=0;a<sizeof(Arr)/sizeof(Arr[0]);a++){
    if(Arr[a]<0){ 
    n++;
    }else{
        p++;
    }
    
}
printf("Positive count %d and negtive count %d",p,n);

    return 0;
}