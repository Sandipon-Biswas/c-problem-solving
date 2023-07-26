// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int x=564;
   int a100=0;
   int a50=0;
   int a20=0;
   int a10=0;
   int a5=0;
   int a2=0;
   int a1=0;
   while(x<1000 && x>99){
       a100++;
       x=x-100;
   };
   while(x<100 && x>49){
       a50++;
       x=x-50;
   };
    while(x<50 && x>19){
       a20++;
       x=x-20;
   };
    while(x<20 && x>9){
       a10++;
       x=x-10;
   };
    while(x<10 && x>4){
       a5++;
       x=x-5;
   };
    while(x<5 && x>1){
       a2++;
       x=x-2;
   };
    while(x<2 && x>0){
       a1++;
       x=x-1;
   };
printf("100 takar note %d \n50 takar note %d \n 20 taka note %d \n 10 takar note %d \n 5 takar note %d \n 2 takar note %d \n 1 takar note %d  ",a100,a50,a20,a10,a5,a2,a1);
    return 0;
}