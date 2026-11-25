/*ARMSTRONG*/
#include<stdio.h>
int armstrong(int a);
int power(int b, int c);
int main()
{
    int n, armstrongnumber;
    printf("Enter the number:");
    scanf("%d", &n);
    armstrongnumber= armstrong(n);
    if(armstrongnumber==n)
        printf("Armstrong number ");
    else
        printf("No armstrong number");

}
int armstrong(int a)
{
    int temp, digits=0, number, sum=0;
    temp =a;
    while(temp!=0)
        {
            temp=temp/10;
            digits++;
        }
    temp = a;
    while (temp!=0)
        {
        number=temp%10;
        sum=sum+power(number,digits);
        temp=temp/10;
        }    
     return sum;
}
int power(int b, int c)
{  
    int i, result=1;
    for (i=1;i<=c;i++)
        {
            result=result*b;
        }   
return result;
}