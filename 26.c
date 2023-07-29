// 26. Write a C program that prints all even numbers between 1 and 50 (inclusive).
// Test Data :
// Even numbers between 1 to 50 (inclusive):
// Expected Output:
// 2 4 6 8 10 12 14 16 18 20 22 24 26 28 30 32 34 36 38 40 42 44 46 48 50
#include <stdio.h>

int main() {
    // Write C code here
    for(int a=1;a<=50;a++){
        if(a%2==0){
            printf("%d  ",a);
        }
    }

    return 0;
}