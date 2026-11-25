#include<stdio.h>
void reverse(char a[100]);
int main()
{
    char str1[100], str2[100];
    printf("Enter string 1:");
    fgets(str1, 100, stdin);
    reverse(str1);
return 0;
}
void reverse(char a[100])
{
    int i=0, j;
    while(a[i]!='\0')
        {
            i++;
        }
    printf("Reversed string is:");
    for(j=i;j>=0;j--)
        {
            printf("%c", a[j]);
        }
}