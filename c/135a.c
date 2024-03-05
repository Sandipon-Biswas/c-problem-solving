#include <stdio.h>

int main() {
    int z, x;
    
    // Read the number of inputs (z)
    scanf("%d", &z);
    
    for (int j = 0; j < z; j++) {
        // Read each input value (x)
        scanf("%d", &x);
        
        // Check if x is 0, 1, or 2 and print 0, otherwise calculate (x-1)/2 and print the result
        if (x == 0 || x == 1 || x == 2) {
            printf("%d\n", 0);
        } else {
            printf("%d\n", (x - 1) / 2);
        }
    }

    return 0;
}