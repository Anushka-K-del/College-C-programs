#include <stdio.h>

int main() {
    int rows = 4;

    for (int i = 1; i <= rows; i++) {
        // Print spaces for right alignment
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");}
           
        for (int k = 1; k<=i; k++) {
            printf("*");
        }
        // Move to the next line
        printf("\n");
    }

    return 0;
}
