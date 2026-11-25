#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100],org_a[100],org_b[100];
    printf("Enter the strings a and b:");
    scanf("%s %s", a, b);
      strcpy(org_a,a);
    strcpy(org_b,b);
    printf("The length of the string 1 is %d", strlen(a));
    printf("\nThe length of the string 2 is %d", strlen(b));
    strcpy(a,b);
    printf("\nstring copy %s", a);
    strcpy(a,org_a);
    strcpy(b,org_b);
    strcat(a,b);
    printf("\nSTRING CONCATINATE: %s", a);
    strcpy(a,org_a);
    strcpy(b,org_b);
    printf("\nCOMPARING THE TWO STRINGS:");
    if(strcmp(a,b)==0)
    {
        printf("\nSAME STRING");
    }
    else
    {
        printf("\nNOT SAME STRING");
    }
    strcpy(a,org_a);
    strcpy(b,org_b);
    printf("\nReverse of string 1 is %s", strrev(a));
    printf("\n Reverse of string 2 is %s", strrev(b));
 return 0;   
}