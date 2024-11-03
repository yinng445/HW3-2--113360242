#include <stdio.h>
#include <stdlib.h>
int power(int base, int exponent);
int main() {
    int base, exponent;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);
    printf("%d^%d = %d\n", base, exponent, power(base, exponent));
    return 0;
}
int power(int base, int exponent) {
    if (exponent == 1) {
        return base;
    }
    return base * power(base, exponent - 1);
}
