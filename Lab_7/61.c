/*PALINDROME*/
#include<stdio.h>
int reverse(int a);
int main()
{
    int n, rev;
    printf("Enter the Number:");
    scanf("%d", &n);
    rev=reverse(n);
    if(rev==n)
        printf("PALINDROME");
    else
        printf("NOT A PALINDROME");
    return 0;
}
 int reverse(int a)
{
    int sum=0, number;
    while(a!=0)
        {
            number=a%10;
            sum=sum*10+number;
            a=a/10;
        }
    return sum;
}