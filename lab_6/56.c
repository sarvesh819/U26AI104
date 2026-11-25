#include<stdio.h>
int main()
{
    int i, j, r, c;
    printf("Enter the number of rows and columns:");
    scanf("%d%d", &r, &c);
  int a[r][c], b[r][c], d[r][c];
    printf("Enter the values for a matrix: ");
    for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
    printf("Enter the value of b matrix: ");
     for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                scanf("%d", &b[i][j]);
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
    printf("b matrix:\n");
      for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
                {
                    printf("%d\t", b[i][j]);
                }
            printf("\n");
        }
    printf("c matrix:\n");
 for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
                {
                    d[i][j]=a[i][j]-b[i][j];
                    printf("%d\t", d[i][j]);
                }
            printf("\n");
        }
    return 0;
}