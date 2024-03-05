// . Write a C program to read an amount (integer value) and break the amount into the smallest possible number of bank notes.
// Test Data :
// Input the amount: 375
// Expected Output:
// There are:
// 3 Note(s) of 100.00
// 1 Note(s) of 50.00
// 1 Note(s) of 20.00
// 0 Note(s) of 10.00
// 1 Note(s) of 5.00
// 0 Note(s) of 2.00
// 0 Note(s) of 1.00
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