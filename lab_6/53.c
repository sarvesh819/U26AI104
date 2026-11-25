#include<stdio.h>
int main()
{
    int i, j, r, c;
    printf("Enter the number of rows and columns:");
    scanf("%d%d", &r, &c);
  int a[r][c];
    printf("Enter the values inside the matrix");
    for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
    for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
                {
                    printf("%d\t", a[i][j]);
                }
            printf("\n");
        }
    for(i=0;i<r;i++)
        {
            int sum=0;
            for(j=0;j<c;j++)
                {
                 sum=sum+a[i][j];   
                }
            printf("%d is the sum of row %d\n", sum, i);
        }
    return 0;
}