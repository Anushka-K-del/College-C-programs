#include <stdio.h>

int main() {
int rows = 4; // Total number of rows in the pattern

for (int i = 1; i <= rows; i++) {  
    // 1. Loop to print leading spaces  
    for (int j = 1; j <= rows - i; j++) {  
        printf(" ");  
    }  

    // 2. Loop to print the stars with a space after each  
    for (int k = 1; k <= i; k++) {  
        printf("* ");  
    }  

    // Move to the next line after completing a row  
    printf("\n");  
}  

return 0;

}