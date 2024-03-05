#include <stdio.h>

int main() {
    int c = 0, x;
    scanf("%d", &x);
    
    while (x >= 100) {
        c++;
        x = x - 100;
    }
    while (x >= 20) {
        c++;
        x = x - 20;
    }
    while (x >= 10) {
        c++;
        x = x - 10;
    }
    while (x >= 5) {
        c++;
        x = x - 5;
    }
    while (x >= 1) {
        c++;
        x = x - 1;
    }
    
    printf("%d", c);
    return 0;
}
