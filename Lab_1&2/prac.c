#include <stdio.h>
int main()
{
    int n, i;
    i=1;
    printf("enter the no.:");
    while (i<=n)
        {
            if(n%i==0)
            {
                printf("%d", i);
                i++;
            }
        }
    return 0;
}