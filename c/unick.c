// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int c,i,j,k,a[10]={1,1,1,2,2,2,3,5,4},b[10];// Write C 
    for( i=0;i<9;i++){
        c=1;
        if(a[i]!=-1){
            for(j=i+1;j<9;j++){
                if(a[i]==a[j]){
                    c++;
                    a[j]=-1;
                }
            }
            if(c==1){
                printf("%d \n",a[i]);
            }
        }
       
    }
    
        
        
        

    return 0;
}