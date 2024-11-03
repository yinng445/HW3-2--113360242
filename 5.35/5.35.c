#include <stdio.h>
#include <stdlib.h>
unsigned long long int fibonacci(unsigned int n);

int main() {
    unsigned int n;
    printf("Enter the Fibonacci term to calculate: ");
    scanf("%u", &n);
    printf("Fibonacci number %u is: %llu\n", n, fibonacci(n));
    system("pause");
    return 0;
}
unsigned long long int fibonacci(unsigned int n) {

    unsigned long a=0;
    unsigned long b=1;
    unsigned int next;
    if (n == 0) {
        return a;
    } else if (n == 1) {
        return b;
    }
    unsigned int i;
    for(i = 2; i <= n; i++) {
        next = a + b;
        a = b;
        b = next;
    }
    return b;
}

