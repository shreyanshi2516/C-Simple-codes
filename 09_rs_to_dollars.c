#include <stdio.h>

int main() {
    float rs, dollars;
    printf("Enter amount in Rs: ");
    scanf("%f", &rs);
    dollars = rs / 48;
    printf("%.2f Rs. = %.2f $\n", rs, dollars);
    return 0;
}
