#include <stdio.h>
void main() {
   int number, count = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    while (number > 0) {
        number /= 10;
        count++;
    }
    printf("The number of digits  is: %d\n",  count);
    return 0;
}