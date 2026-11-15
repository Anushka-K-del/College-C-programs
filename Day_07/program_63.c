#include <stdio.h>
int findHCF(int a, int b);
int findLCM(int a, int b);

int main() {
    int num1, num2;

    printf("Enter two positive numbers: ");
    scanf("%d %d", &num1, &num2);
    int hcf = findHCF(num1, num2);
    int lcm = findLCM(num1, num2);

    printf("HCF of %d and %d = %d\n", num1, num2, hcf);
    printf("LCM of %d and %d = %d\n", num1, num2, lcm);

    return 0;
}
int findHCF(int a, int b) {
    int hcf = 1;
    int min = (a < b) ? a : b;

    for (int i = 1; i <= min; i++) {
        if (a % i == 0 && b % i == 0) {
            hcf = i;
        }
    }
    return hcf;
}

int findLCM(int a, int b) {
    int max = (a > b) ? a : b;

    while (1) {
        if (max % a == 0 && max % b == 0) {
            return max;
        }
        max++;
    }
}
