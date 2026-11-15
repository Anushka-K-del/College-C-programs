#include <stdio.h>
void sumOfNaturalNumbers(int n);

int main() {
    int n;
    
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    sumOfNaturalNumbers(n);
    
    return 0;
}

void sumOfNaturalNumbers(int n) {
    int sum = 0;
    
    for (int i = 1; i <= n; i++) {
        sum = sum + i;
    }
    
    printf("Sum of first %d natural numbers = %d\n", n, sum);
}
