#include <stdio.h>

int main() {
    float a, b, quotient;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    if (b == 0) {
        printf("Error: Division by zero\n");
    } else {
        quotient = a / b;
        printf("Quotient = %.2f\n", quotient);
    }
    return 0;
}
