#include<stdio.h>
void Fibbanaci(int a);
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    Fibbanaci(n);
    return 0;   
}
void Fibbanaci(int a)
{
    int n1=0,n2=1,sum, i;
    printf("%d\t %d\t", n1, n2);
    for(i=1;i<=a-2;i++)
        {
            sum=n1+n2;
            printf("%d\t", sum);
            n1=n2;
            n2=sum;
        }
}