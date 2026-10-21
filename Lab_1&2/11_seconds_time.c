#include <stdio.h>
int main ()
{
    int totalsec, hours, min, sec;
    printf("Enter total seconds:");
    scanf("%d",&totalsec);
    hours = totalsec / 3600;
    min= (totalsec%3600)/60;
    sec = totalsec % 60;

    printf("Time: %d:%d:%d",hours, min, sec);
    return 0;
}