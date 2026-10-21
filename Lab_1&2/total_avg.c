#include <stdio.h>
int main ()
{
    int m1, m2, m3, m4, m5;
    float total, percentage;

    printf("Enter the marks of 5 subjects\n ");
    printf("sub 1:  \n");
    scanf("%d", &m1);
    printf("sub 2:   \n");
    scanf("%d", &m2);
    printf("sub 3:  \n");
    scanf("%d", &m3);
    printf("sub 4:  \n");
    scanf("%d", &m4);
    printf("sub 5:  \n");
    scanf("%d", &m5);

    total = m1+m2+m3+m4+m5;
    printf("The total marks is: %.2f\n", total);
    percentage = total/5;
    printf("Percentage of the individual is: %.2f",percentage);
    return 0;


}