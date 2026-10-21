#include <stdio.h>

int main() {
    int base, exp, i;
    long long power = 1;
    
    printf("Enter base: ");
    scanf("%d", &base);
    
    printf("Enter exponent: ");
    scanf("%d", &exp);
    
    if (exp < 0) {
        printf("This program doesn't handle negative exponents.\n");
    } else {
        for (i = 1; i <= exp; i++) {
            power = power * base;
        }
        printf("%d ^ %d = %lld\n", base, exp, power);
    }
    
    return 0;
}