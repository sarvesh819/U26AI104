#include<stdio.h>
int main()
{
    int i, j, temp, size;
    printf("Enter the size of the array:");
    scanf("%d", &size);
    int n[size];
    printf("Enter the numbers:");
    for(i=0;i<size;i++)
    {
        scanf("%d", &n[i]);
    }
    for(i=0;i<=size;i++)
    {
        for(j=0;j<size-i;j++)
        {
            if(n[j]>n[j+1])
            {
                temp=n[j];
                n[j]=n[j+1];
                n[j+1]=temp;
            }
        }
    }
    printf("sorted arrays:\t");
    for(i=0;i<size;i++)
    {
        printf("%d\t", n[i]);
    }
    return 0;

}