#include <stdio.h>

int main() {
    float dollars, pounds;
    // 1$ = 48 Rs, 1 pound = 70 Rs => 1$ = 48/70 pounds
    printf("Enter amount in dollars: ");
    scanf("%f", &dollars);
    pounds = dollars * 48 / 70;
    printf("%.2f $ = %.2f pounds\n", dollars, pounds);
    return 0;
}
