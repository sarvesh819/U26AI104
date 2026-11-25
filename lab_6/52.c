#include<stdio.h>
int main()
{
    int i, j, r, c, max, min;
    printf("Enter the number of rows and columns:");
    scanf("%d %d", &r, &c);
    int a[r][c];
    printf("Enter the values for a matrix:\n");
    for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
                {
                     scanf("%d", &a[i][j]);
                }
        }
    printf("a matrix:\n");
    for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
                {
                     printf("%d\t", a[i][j]);
                }
            printf("\n");
        }
    max=a[0][0];
    for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
                {
                    if(a[i][j]>max)
                        max=a[i][j];
                }
        }
    min=a[0][0];
    for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
                {
                    if(a[i][j]<min)
                        min=a[i][j];
                }
        }
    printf("max and min is %d, %d", max, min);
    return 0;
}