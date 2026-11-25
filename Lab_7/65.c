#include<stdio.h>
int prime(int a);
int main()
{
    int n, number ;
    printf("Enter the number:");
    scanf("%d", &n);
    number= prime(n);
    if(number==1)
        printf("Prime");
    else
        printf("No prime");
    return 0;   
}
int prime (int a)
{
    int i, flag;
    for(i=2;i<=a/2;i++)
        {
            if(a%i==0)
                flag=0;
            else
                flag=1;
        }

if(flag==0)
    return 0;
else
    return 1;
}