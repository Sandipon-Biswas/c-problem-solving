#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    int z = 1;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            if (i % 2 == 0) {
                printf("#");
            }
            if (z == 1) {
                if (i % 2 != 0 && j == y - 1) {
                    printf("#");
                    if (j == y - 1) {
                        z = 0;
                    }
                } else if (i % 2 != 0 && j < y) {
                    printf(".");
                }
            } else if (z == 0) {
                if (i % 2 != 0 && j == 0) {
                    printf("#");
                } else if (i % 2 != 0 && j <= y) {
                    printf(".");
                    if (j == y - 1) {
                        z = 1;
                    }
                }
            }
        }
        printf("\n");
    }
    return 0;
}