#include <stdio.h>
int main()
{
    float celsius, farenheit;
    printf("Enter temperature in farenheit: \n");
    scanf("%f", &farenheit);
    celsius = (farenheit-32)*5/9;
    printf("The temperature in celsius: %.2f",celsius);
    return 0;
    

    
}
