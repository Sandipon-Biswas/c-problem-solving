#include <stdio.h>
void main(){
    int x,a[5];
   
    for(int i=0;i<5;i++){
    printf("Enter %d st number :  \n",i+1);
    scanf("%d",&x);
    a[i]=x;
    }
    for(int j=0;j<5;j++){
        if(a[j]<5){
               printf("a[%d] = %d \n",j,a[j]);
        }
     
    }
}