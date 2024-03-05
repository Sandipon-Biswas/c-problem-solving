// 20. Write a C program to print the roots of Bhaskara’s formula from the given three floating numbers. Display a message if it is not possible to find the roots.
// Test Data :
// Input the first number(a): 25
// Input the second number(b): 35
// Input the third number(c): 12

#include <stdio.h>
#include <math.h>

int main() {
    float r1, r2, root;
    int a = 25;
    int b = 35;
    int c = 12;
    root = sqrt(b * b - 4 * a * c);
    r1 = (-b + root) / (2 * a);
    r2 = (-b - root) / (2 * a);
    printf("%f\n%f", r1 , r2 );
    return 0;
}