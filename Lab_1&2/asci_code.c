#include <stdio.h>
int main ()
{
    char ch;
    printf("enter a character:");
    scanf("%c", &ch);

    printf("ascii code of %c is %d",ch, ch);
    return 0;
}