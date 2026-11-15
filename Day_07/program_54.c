#include <stdio.h>

int main() {
    // Outer loop controls the ending point of the inner loop
    for (int i = 1; i <= 4; i++) {
        // Inner loop always starts at 4 and counts down to i
        for (int j = 4; j >= i; j--) {
            printf("%d ", j);
        }
        printf("\n"); // Move to the next line
    }
    return 0;
}