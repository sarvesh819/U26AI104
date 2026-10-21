#include<stdio.h>
int main()
{
    int a, i, j;
    printf("Enter the number of rows:");
        scanf("%d", &a);
    for(i=65;i<65+a;i++)
        {
            for(j=65;j<=i;j++)
                {
                    printf("%c", j);
                }
            printf("\n");
        }
    return 0;
}