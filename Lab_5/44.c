//total odd and even numbers 
#include<stdio.h>
int main()
{
    int n, i, j, countOdd=0, countEven=0;
    printf("enter the size of array ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the numbers:");
        for(i=0;i<n;i++)
        {
          scanf("%d", &a[i]);  
        } 
    for(i=0;i<n;i++)
        {
            if(a[i]%2==0)
            {
                countEven+=1;
            }
            else
            {
                countOdd+=1;
            }
        }
    printf("total no: of even and odd = %d ,%d ", countEven , countOdd);
return 0;
    
}