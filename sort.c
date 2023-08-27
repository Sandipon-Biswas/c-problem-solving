// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i,j,a[10];// Write C code here
    printf("Enter number ");
    for( i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
        printf("output \n");
    
      for( i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    
    for( i=0;i<5;i++){
        printf("%d \n",a[i]);
    }
    
    return 0;
}