#include <stdio.h>

int main() {
    float a, b;
    char choice;
    
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    
    printf("Choose an operation:\n");
    printf("A - Addition\n");
    printf("S - Subtraction\n");
    printf("M - Multiplication\n");
    printf("D - Division\n");
    printf("Enter your choice: ");
    scanf(" %c", &choice);
    
    switch (choice) {
        case 'A':
        case 'a':
            printf("Sum = %.2f\n", a + b);
            break;
        
        case 'S':
        case 's':
            printf("Difference = %.2f\n", a - b);
            break;
        
        case 'M':
        case 'm':
            printf("Product = %.2f\n", a * b);
            break;
        
        case 'D':
        case 'd':
            if (b != 0)
                printf("Quotient = %.2f\n", a / b);
            else
                printf("Error: Division by zero!\n");
            break;
        
        default:
            printf("Invalid choice!\n");
    }
    
    return 0;
}