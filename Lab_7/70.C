#include<stdio.h>
void vowelcheck(char a);
int main()
{
    char n;
    printf("Enter the character:");
    scanf("%c", &n);
    vowelcheck(n);
}
void vowelcheck(char a)
    {
        if (a == 'a'|| a=='e'||a=='i'||a=='o'||a=='u'
            ||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
            printf("VOWEL");
        else
            printf("NO VOWEL");
        
    }
