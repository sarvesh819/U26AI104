#include <stdio.h>

int stringLength(char *s)
{
    int count = 0;

    while (s[count] != '\0')
        count++;

    return count;
}

void readLine(char *s, int size)
{
    int i = 0, ch;

    while (i < size - 1 && (ch = getchar()) != '\n' && ch != EOF)
    {
        s[i] = ch;
        i++;
    }

    s[i] = '\0';
}

int main()
{
    char text[100];
    int len;

    printf("Enter a line of text: ");
    readLine(text, sizeof(text));

    len = stringLength(text);

    printf("Length of the string: %d\n", len);

    return 0;
}