#include<stdio.h>
int main()
{
    int a[10],b[10], c, i;
    printf("before swapping:\n");
    printf("Enter 10 numbers for array a:");
    for(i=0;i<10;i++)
        {
            scanf("%d", &a[i]);
        }
    
    printf("Enter 10 numbers for array b:");
    for(i=0;i<10;i++)
        { 
    scanf("%d", &b[i]);
        }
    for(i=0;i<10;i++)
        {
            c=a[i];
            a[i]=b[i];
            b[i]=c;
        }
    printf("after swapping:\n");
    printf("a:\t");
    for(i=0;i<10;i++)
        {
                printf("%d\t", a[i]);
        }
    printf("\nb:\t");
    for(i=0;i<10;i++)
        {
            printf("%d\t", b[i]);
        }
    
    return 0;
}