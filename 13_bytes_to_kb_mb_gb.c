#include <stdio.h>

int main() {
    long long bytes;
    double kb, mb, gb;
    printf("Enter number of bytes: ");
    scanf("%lld", &bytes);
    kb = bytes / 1024.0;
    mb = kb / 1024.0;
    gb = mb / 1024.0;
    printf("KB = %.2f\n", kb);
    printf("MB = %.2f\n", mb);
    printf("GB = %.4f\n", gb);
    return 0;
}
