#include<stdio.h>
int max(int a[],int size);
int main()
{
    int n, i, maximum;
    printf("Enter the number of data:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the numbers:");
    for(i=0;i<n;i++)
        {
            scanf("%d", &a[i]);
        }
    maximum= max(a, n);
    printf("maimum is %d", maximum);
    return 0;
}
int max(int a[], int size)
{
int max = a[0], i;
for(i=1;i<size;i++)
    {
        if(a[i]> max)
            max=a[i];
    }
return max;
}