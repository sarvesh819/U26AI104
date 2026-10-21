
#include<stdio.h>
int main()
{
    int i, max;
    int a[10];
    printf("Enter the numbers of array a:");
        for(i=0;i<10;i++)
        {
          scanf("%d", &a[i]);  
        } 
    int b[10];
    printf("Enter the numbers of array b:");
        for(i=0;i<10;i++)
        {
          scanf("\n%d", &b[i]);  
        } 
    int c[10];
    
            printf("sum of array a and arrab b is:");
    for(i=0;i<10;i++)
        {
            c[i]=a[i]+b[i];
            printf("\n%d ", c[i]);
        }
return 0;
    
}