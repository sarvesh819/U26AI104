#include <stdio.h>
int main()
{
    float M, P, C, E, CM;
    printf("Enter Math marks out of 200:");
    scanf("%f", &M);
    printf("Enter Physics marks out of 200:");
    scanf("%f", &P);
    printf("Enter Chemistry marks out of 200:");
    scanf("%f", &C);
    printf("Enter entrance exam marks out of 100:");
    scanf("%f", &E);
    CM = (M/2) + (P/2) + (C/2) + (E);
    printf("The cutoff mark is %f",CM);
    return 0;

}