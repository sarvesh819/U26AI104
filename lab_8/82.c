#include<stdio.h>
int main()
{
    char str[300];
    int i=0;
    printf("Enter the string:");
    fgets(str, 30, stdin);
    int char_count=0, word_count=1;
    while(str[i]!='\0')
        {
            char_count++;
            if(str[i]==32)
            {
                word_count++;
            }
            i++;
        }
    printf("character and word count respectively are %d and %d", char_count, word_count);
    
    return 0;
}