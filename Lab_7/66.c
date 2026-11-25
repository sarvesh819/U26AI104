#include<stdio.h>
int factorial(int a);
int main()
{
    int n, r, ncr, v,r1,r2,r3;
    printf("Enter n,r:");
    scanf("%d%d", &n, &r);
    v=n-r;
    
        r1= factorial(n);
        r2 = factorial(r);
        r3 = factorial(v);
    ncr = r1/ (r2*r3);
    printf("%d", ncr);
    return 0;
}
int factorial(int a)
{
     int fact=1, i;
    for(i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    return fact;
}