#include <stdio.h>
int main()
{
     int a, b;
     char operation;
     printf("Enter two no:\n");
     scanf("%d%d",&a, &b);     

     printf("enter operation:");
     scanf(" %c", &operation);
        switch(operation)
        {
        case '+':
                printf("%d is the sum",a+b);
                break;
        case '-':
                printf("%d is the differnce",a-b);
                                break;
                
        case '*':
                printf("%d is the product",a*b);
                break;
        case '/':
        if(b==0)

        {
                printf("%d cannot be in denomiator",b);
                break;
        }
        else{
                printf("%d is the quotient",a/b);
              break;
        }
        default:
                printf("invalid operator");

        }
        return 0;
}