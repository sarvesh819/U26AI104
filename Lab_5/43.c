//sum of 10 integers in an array 
#include<stdio.h>
int main()
{
    int a[10],i,j,sum=0;
    printf("enter the numbers:");
    for(i=0;i<10;i++)
        {
            scanf("%d", &a[i]);
        }
    for(i=0;i<10;i++)
        {
            sum=sum+a[i];
        }
    printf("\nsum=%d", sum);
return 0;
    
}