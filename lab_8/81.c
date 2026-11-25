#include<stdio.h>
int main()
{
    char str[300];
    int i=0;
    printf("Enter the string:");
    fgets(str, 30, stdin);
    int countL=0,countU=0,countD=0,countS=0;
    for(i=0;str[i]!='\0';i++)
        {
            if (str[i]>='a'&& str[i]<='z')
                countL++;
            if (str[i]>='A'&& str[i]<='Z')
                countU++;
            if (str[i]>=48 && str[i]<=57)
                countD++;
            if (str[i]>=33 && str[i]<=47)
                countS++;     
        }
    printf("count of lower case:%d\nupper case:%d\ndigits%d\nspecial digits%d\n", countL, countU, countD, countS);
    return 0;
}