#include <stdio.h>

int main() {
    int n = 3;

    // Upper Half of the Diamond
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for(int k = 1; k <= i; k++) {
            printf("* ");
        }
        printf("\n");
    }

    // Lower Half of the Diamond
    for(int i = n - 1; i >= 1; i--) {
        for(int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Corrected to use lowercase 'k' consistently
        for(int k = 1; k <= i; k++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}