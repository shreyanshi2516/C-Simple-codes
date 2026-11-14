#include <stdio.h>

int main() {
    float gross, allowance, deduction, net;
    printf("Enter gross salary: ");
    scanf("%f", &gross);
    allowance = 0.10 * gross;   // 10%
    deduction = 0.03 * gross;   // 3%
    net = gross + allowance - deduction;
    printf("Net Salary = %.2f\n", net);
    return 0;
}
