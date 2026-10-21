#include <stdio.h>
int main()
{
    int m1, m2, m3, m4, m5;
    float percentage;
    printf("Enter your marks of 5 sub:");
    scanf(" %d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);
    percentage = ((m1+m2+m3+m4+m5)/5);
    if (percentage>70)
    {
        printf("Distinction");
    }
    else if (percentage >= 60 && percentage < 70 )
    {
        printf("First class");
    }
    else if (percentage>= 45 && percentage< 60)
    {
        printf("Second Class");
    }
    else if (percentage>=35 && percentage<45)
    {
        printf("Pass class");
    }
    else if (35>percentage)
    {
        printf("Fail");
    }
    return 0;
}