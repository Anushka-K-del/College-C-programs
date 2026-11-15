#include <stdio.h>

int main() {
    int count = 1; // Continuous counter for the numbers

    // Outer loop for the number of rows (4 rows total)
    for (int i = 1; i <=4; i++) {
        
        // Inner loop to print numbers in each row
        for (int j = 1; j <= i; j++) {
            printf("%d ", count);
            count++; // Increment the counter after printing
        }
        
        printf("\n"); // Move to the next line after completing a row
    }

    return 0;
}