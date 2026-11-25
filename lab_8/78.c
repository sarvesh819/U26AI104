#include<stdio.h>
int main()
{
    char str1[30];
    char charachter;
    printf("Enter a string:");
    fgets(str1, 30, stdin);
    printf("Enter the character u want to check if its present:");
    scanf("%c", &charachter);
    int i=0, flag=0;
    while(str1[i]!='\0')
        {
            if(str1[i]==charachter)
            {
                flag=1;
                break;
            }
            i++;
        }
    if(flag==0)
        printf("%c is not present", charachter);
    else
        printf("%c is present", charachter);  
          
    return 0;
}