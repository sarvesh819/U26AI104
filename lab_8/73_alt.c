#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    printf("Enter the string:");
    fgets(str, 20, stdin);
    int i=0;
    while(str[i]!='\0')
        {
            i++;
        }
    printf("The length of the string is:%d", i);
    printf("\nlength of string without using <string.h>=%d", strlen(str));
    return 0;
}