#include <stdio.h>

int main() {
    float dollars, rs;
    printf("Enter amount in dollars: ");
    scanf("%f", &dollars);
    rs = dollars * 48;
    printf("%.2f $ = %.2f Rs.\n", dollars, rs);
    return 0;
}
