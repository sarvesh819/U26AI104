#include<stdio.h>
int main()
{
    char str1[30];
    char charachter;
    printf("Enter a string:");
    fgets(str1, 30, stdin);
    int i=0, count=0;
    while(str1[i]!='\0')
        {
            if(str1[i]=='a'||str1[i]=='e'||str1[i]=='i'||str1[i]=='o'||str1[i]=='u')
            {
                count++;
                
            }
            i++;
        }
    printf("vowels is repeated %d times.", count);
    return 0;
}