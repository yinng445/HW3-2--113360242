#include <stdio.h>
#include <stdlib.h>
int gcd(int a, int b);
int lcm(int a, int b);
int main(void) {
    int num1, num2;
    
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("The least common multiple of %d and %d is: %d\n", num1, num2, lcm(num1, num2));

    return 0;
}
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b); 
}


