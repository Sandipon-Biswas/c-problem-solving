// Online C compiler to run C program online
#include <stdio.h>

int main() {
int x=1;
int p;
while(x!=0){
    printf("Enter a password :");
    scanf("%d",&p);
    if(p==1234){
        printf(" password correct ");
        x=0;
    }else{
         printf(" password incorrect \n");
    }
    
}

    return 0;
}