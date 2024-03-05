#include <stdio.h>

int main() {
   int r=0,n,i,max=0;
   scanf("%d",&n);
   int a[n];
   for(i=0;i<n;i++){
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++){
       if(a[i]>max){
           max=a[i];
       }
   }
   for(i=0;i<n;i++){
       r=r+(max-a[i]);
   }
   printf("%d",r);
    return 0;
}