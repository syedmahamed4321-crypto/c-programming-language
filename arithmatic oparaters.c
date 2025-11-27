#include <stdio.h>
int main() {
    int a, b;
    // Input values
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    // Arithmetic operations
    printf("\n--- Arithmetic Operations ---\n");
    printf("Addition (a + b) = %d\n", a + b);
    printf("Subtraction (a - b) = %d\n", a - b);
    printf("Multiplication (a * b) = %d\n", a * b);
    printf("Division (a / b) = %d\n", a / b);
    printf("Modulus (a %% b) = %d\n", a % b);
    return 0;
}
