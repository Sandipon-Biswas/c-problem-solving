#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, c = 0;
    scanf("%d", &x);
    int *a = (int *)malloc(x * sizeof(int));
    int *b = (int *)malloc(x * sizeof(int));

    if (a == NULL || b == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < x; i++) {
        scanf("%d %d", &a[i], &b[i]);
    }

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            if (a[i] == b[j]) {
                c++;
            }
        }
    }

    printf("%d", c);

    // Don't forget to free the allocated memory
    free(a);
    free(b);

    return 0;
}
