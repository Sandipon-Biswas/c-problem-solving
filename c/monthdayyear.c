// 18. Write a C program to convert a given integer (in days) to years, months and days, assuming that all months have 30 days and all years have 365 days.
// Test Data :
// Input no. of days: 2535
// Expected Output:
// 6 Year(s)
// 11 Month(s)
// 15 Day(s)
// Click me to see the solution
// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a,h,m,s;
    printf("Enter second ");
    scanf("%d",&a);
    h=(a/365);
    m=((a)-(h*365))/30;
    s=a-h*365-m*30;
    printf("the year %d \n the month is %d \n the days is %d",h,m,s);
    return 0;
}