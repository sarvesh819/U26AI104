#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], oldch, newch;
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Enter the character to replace: ");
    scanf(" %c", &oldch);

    printf("Enter the new character: ");
    scanf(" %c", &newch);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == oldch)
            str[i] = newch;
    }

    printf("Modified string: %s\n", str);

    return 0;
}