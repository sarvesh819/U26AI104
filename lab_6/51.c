#include<stdio.h>
int main()
{
    int n, i, j;
    printf("Enter the number of data:");
    scanf("%d", &n);
    int a[n];
    printf("Enter the values:");
    for(i=0;i<n;i++)
        {
            scanf("%d", &a[i]);
        }
    printf("matrix a:\n");
    for(i=0;i<n;i++)
        {
            printf("%d\t", a[i]);
        }
    printf("\nReversed matrix:\n");
    for(i=n-1;i>=0;i--)
        {
            printf("%d\t", a[i]);
        }
    return 0;
}