#include <stdio.h>

int main() {
    int n, m, c, mm = 0, cc = 0;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &m, &c);
        if (m > c) {
            mm++;
        } else if (c > m) {
            cc++;
        }
    }
    
    if (mm > cc) {
        printf("Mishka");
    } else if (cc > mm) {
        printf("Chris");
    } else {
        printf("Friendship is magic!^^");
    }
    
    return 0;
}