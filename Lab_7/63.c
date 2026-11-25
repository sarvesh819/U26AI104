#include<stdio.h>
void swap(int a, int b);
int main()
{
    int a, b;
    printf("Enter the numbers:");
    scanf("%d%d", &a, &b);
    printf("Before swapping:%d,%d", a, b);
    swap(a,b);
    return 0;
}
void swap(int a, int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("\nafter swapping:%d,%d", a,b);
}