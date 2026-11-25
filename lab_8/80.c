#include<stdio.h>
int main()
{
    char str[30], i=0;
    printf("Enter the string:");
    fgets(str, 30, stdin);
    for(i=0;str[i]!='\0';i++)
        {
            if (str[i]>='a'&& str[i]<='z')
                {
                str[i]=str[i]-32;
                }
        }
    printf("%s", str);
    return 0;
    
}