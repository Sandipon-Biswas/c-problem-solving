//1.Write a program to count numbers of digits in a given number
#include <stdio.h>
void main() {
int number, count = 0;
printf("Enter a number: ");
scanf("%d", &number);
while (number > 0) {
number /= 10;
count++;
}
printf("The number of digits is: %d\n", count);
}
//2.Write a program to find factorial of a given number
#include <stdio.h>
void main() {
int number, i,fact = 0;
printf("Enter a number: ");
scanf("%d", &number);
if(number>0){
fact = 1;
for(i=1;i<=number;i++){
fact*=i;
}
}
printf("The factorial of %d is: %d\n", number, fact);
}
//3.Write a program to print positive integers from 1 to 10
#include <stdio.h>
void main() {
int i;
printf("Positive integers from 1 to 10:\n");
for (i = 1; i <= 10; i++) {
printf("%d ", i);
}
}
//4.Write a program to swap the values of two variables without using a third variable
#include <stdio.h>
void main() {
int a, b;
printf("Enter the value of a: ");
scanf("%d", &a);
printf("Enter the value of b: ");
scanf("%d", &b);
a=a+b;
b=a-b;
a=a-b;
printf(" a = %d, b = %d\n", a, b);
}
//5.Write a prograiin to check whether the given input is prime or not
#include <stdio.h>
void main() {
int a,i,x=1;
printf("Enter the value of a: ");
scanf("%d", &a);
for(i=2;i<a;i++){
if(a%i==0){
x=0;
printf("The number is not prime");
break;
}
}
if(x==1){
printf("The number is prime");
}
}
//6.Write a program to compute grade of students using if..else
#include <stdio.h>
void main() {
int n;
printf("Enter the number of a exam : ");
scanf("%d", &n);
if(n>=90 && n<=100){
printf("A+");
}else if(n>=80 && n<90){
printf("A");
}else if(n>=70 && n<80){
printf("B+");
}else if(n>=60 && n<70){
printf("B");
}else if(n>=50 && n<60){
printf("C");
}else if(n<50){
printf("F");
}else{
printf("Enter a valid Number");
}
}