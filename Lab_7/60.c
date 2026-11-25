/*ODD OR EVEN USING FUNCTION*/
#include<stdio.h>
void oddeven(int a);
int main()
{
    int n;
    printf("Enter the Number:");
    scanf("%d", &n);
    oddeven(n);
    return 0;
}
  void oddeven(int a)
{
    if(a%2==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
}
    