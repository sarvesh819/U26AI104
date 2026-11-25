#include<stdio.h>
int main()
{
    int  i, j, k;
    int a[3][3], b[3][3],c[3][3]={0} ;
    printf("Enter the values for a matrix:");
    for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
               {
                  scanf("%d", &a[i][j]);              
               }
       }
               printf("a matrix:\n");
                 for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
               {
                  printf("%d\t", a[i][j]);              
               }
               printf("\n");
       }
               printf("Enter the values for b matrix:");
    for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
               {
                  scanf("%d", &b[i][j]);              
               }
       }
               printf("b matrix:\n");
                 for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
               {
                  printf("%d\t", b[i][j]);              
               }
               printf("\n");
       }
    for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
                {
                    for(k=0;k<3;k++)
                        {
                            c[i][j]=c[i][j]+a[i][k]*b[k][j];
                        }
                }
        }
    printf("c matrix after multiplication is:\n");
    for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
                {
                    printf("%d\t", c[i][j]);
                }
            printf("\n");
        }
    return 0;             
}