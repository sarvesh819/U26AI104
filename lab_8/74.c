#include<stdio.h>
void concatinate(char a[100],char b[100]);
int main()
{
    char str1[100], str2[100];
    printf("Enter string 1:");
    fgets(str1, 100, stdin);
    printf("Enter string 2:");
    fgets(str2, 100, stdin);
    printf("Before concatinate string 1 and string 2 is\n");
    fputs(str1, stdout);
    fputs(str2, stdout);
    concatinate(str1, str2);
    return 0;
}
void concatinate(char a[100], char b[100])
{
    int i=0, j=0;
   while(a[i]!='\0')
       {
           i++;
       }
    i--;
    while(b[j]!='\0')
        {
            a[i]=b[j];
            i++;
            j++;
        }
    printf("after concatinating string 1 and string 2 is\n");
    fputs(a, stdout);
    fputs(b, stdout);
}