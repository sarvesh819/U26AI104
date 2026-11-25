#include<stdio.h>
#include<string.h>
int main()
{
    char name[100];
    int length;
    printf("enter the name:");
    scanf("%s", name);
    length=strlen(name);
    printf("length of the string is: %d", length);
    return 0;
}