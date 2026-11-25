#include <stdio.h>

int main()
{
    char name[50];
    int i;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("ASCII codes:\n");
    for (i = 0; name[i] != '\0' && name[i] != '\n'; i++)
    {
        printf("%c = %d\n", name[i], name[i]);
    }

    return 0;
}