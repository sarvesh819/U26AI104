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

    printf("a matrix:\n");
    for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)3
                {
                    printf("%d\t", a[i][j]);
                }
            printf("\n");
        }
      printf("a transpose matrix:\n");
    for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
                {
                    printf("%d\t", a[j][i]);
                }
            printf("\n");
        }
  
    return 0;
}