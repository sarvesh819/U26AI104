#include<stdio.h>
int main()
{
    int a[10], i, countPositive=0, countNegative=0, countZero=0;
    printf("Enter the numbers:");
    for(i=0;i<10;i++)
        {
            scanf("%d", &a[i]);
        }    
    for(i=0;i<10;i++)
        {
            if(a[i]>0)
            {
                countPositive+=1;
            }
            if(a[i]<0)
            {
                countNegative+=1;
            }
            if(a[i]==0)
            {
                countZero+=1;
            }
            
        }
    printf("Total positive integers is %d , negative integer is %d, and zero is %d",
         countPositive, countNegative, countZero);
    return 0;
}