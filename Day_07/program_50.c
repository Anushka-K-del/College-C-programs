#include <stdio.h>

int main() {
    char op;
    float a, b;

    printf("Enter operator: ");
    scanf(" %c", &op); // Added a space before %c to clear any leftover newline characters

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch (op) {
        case '+': 
            printf("Result = %f\n", a + b);
            break;
        case '-': 
            printf("Result = %f\n", a - b);
            break;
        case '*': 
            printf("Result = %f\n", a * b);
            break;
        case '/': 
            if (b != 0) {
                printf("Result = %f\n", a / b);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        default: 
            printf("Invalid operator\n");
    }

    return 0;
}