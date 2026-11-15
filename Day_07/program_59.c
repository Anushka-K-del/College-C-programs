#include <stdio.h>

int main() {
    int n = 3;

    // Loop for rows (going downwards from 3 to 1)
    for (int i = n; i >= 1; i--) {
        
        // 1. Left side (counting UP from 1 to 3)
        for (int j = 1; j <= n; j++) {
            if (j <= i) {
                printf("%d ", j);
            } else {
                printf("  "); // Two spaces
            }
        }

        // 2. Right side (counting DOWN from 2 to 1)
        for (int j = n - 1; j >= 1; j--) {
            if (j <= i) {
                printf("%d ", j);
            } else {
                printf("  "); // Two spaces
            }
        }

        printf("\n");
    }

    return 0;
}