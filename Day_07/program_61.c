#include <stdio.h>

// Function declaration
void fact(int n);

int main() {
    int n;
    printf("Enter a positive number: ");
    scanf("%d", &n);
    
    // Function call
    fact(n);
    
    return 0;
}

// Function definition
void fact(int n) {
    int f = 1;
    
    for (int i = 1; i <= n; i++) {
        f = f * i;
    }
    
    printf("Factorial of %d = %d\n", n, f);
}
