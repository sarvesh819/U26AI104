#include <stdio.h>
int main()
{
    int Basicpay, HRA, DA, other;
    int grosssalary;

    printf("Enter the details \n");
    printf("Basic salary: \n");
    scanf("%d", &Basicpay);
    printf("House rent allowance: \n");
    scanf("%d",&HRA);
    printf("Dearness Allowance:  \n");
    scanf("%d", &DA);
    printf("Other allowance: \n");
    scanf("%d", &other);

    grosssalary = Basicpay+HRA+DA+other;
    printf("The gross salary is: %d", grosssalary);
    return 0;
}