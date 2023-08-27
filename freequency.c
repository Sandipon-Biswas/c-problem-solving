// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int c,i,j,k,a[10]={1,1,1,2,2,2,3,3,4},b[10];// Write C 
    for( i=0;i<9;i++){
        c=1;
        if(a[i]!=-1){
            for(j=i+1;j<9;j++){
                if(a[i]==a[j]){
                    c++;
                    a[j]=-1;
                }
            }
        }
        b[i]=c;
    }
    
        
            for(k=0;k<9;k++){
              if(a[k]!=-1){
                  printf("The %d is %d time \n",a[k],b[k]);
              }
            }
        

    return 0;
}