#include <stdio.h>
int main()
{
    long int hrs, min, sec, totalsec;
    printf("Enter hr:");
    scanf("%d", &hrs);
    printf("Enter min:");
    scanf("%d",&min);
    printf("Enter sec:");
    scanf("%d",&sec);
    hrs=hrs*3600, min=min*60;
    totalsec=(hrs+min+sec);
    printf("The total no. of seconds=%d",totalsec);
    return 0;
}