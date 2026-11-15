#include <stdio.h>

int main() {
    // Outer loop for rows
    for (int i = 1; i <= 4; i++) {
        
        // Inner loop for columns (runs 'i' times)
        for (int j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        
        // Move to the next line after completing a row
        printf("\n");
    }
    return 0;
}