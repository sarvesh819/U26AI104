#include<stdio.h>
void swapping(char second[], char first[]);
int main()
{
    char str1[50], str2[50];
    printf("Enter string 1");
    fgets(str1, 50, stdin);
    printf("Enter string 2:");
    fgets(str2, 50, stdin);
    swapping(str2, str1);
}
void swapping(char second[50], char first[50])
{
    int i=0;
    while(first[i]!='\0')
        {
            second[i]=first[i];
            i++;
        }
    second[i]='\0';
    printf("After swapping: string 1 and string 2 is :");
    fputs(first, stdout);
    fputs(second, stdout);
}