#include<stdio.h>
int compare(char a[100],char b[100]);
int main()
{
    char str1[100], str2[100];
    printf("Enter string 1:");
    fgets(str1, 100, stdin);
    printf("Enter string 2:");
    fgets(str2, 100, stdin);
    int comp_value=compare(str1, str2);
   if(comp_value==0)
   {
       printf("Same");
   }
    else
       printf("Not same");

    return 0;
}
int compare(char a[100], char b[100])
{
  int i=0, c=1;
 while(a[i]&&b[i]!='\0')
     {
         c=a[i]-b[i];
         if(c==0)
         {
             i++;
         }
         else
         break;
     }
    return c;
}