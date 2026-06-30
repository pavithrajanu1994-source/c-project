#include <stdio.h>
#include <string.h>

void reverse()
{
    char s[100], temp;
    int i, len;

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    len = strlen(s);

    if (s[len - 1] == '\n')
    {
        s[len - 1] = '\0';
        len--;
    }

    for (i = 0; i < len / 2; i++)
    {
        temp = s[i];
        s[i] = s[len - i - 1];
        s[len - i - 1] = temp;
    }

    printf("Reverse string: %s\n", s);
}
