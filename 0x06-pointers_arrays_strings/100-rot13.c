#include "main.h"
#include <stdlib.h>

char *rot13(const char *s)
{
    int i;
    char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
    char *result = malloc(strlen(s) + 1);

    if (result == NULL) {
        return NULL;
    }

    char *dest = result;

    while (*s)
    {
        char c = *s;
        char found = 0;

        for (i = 0; i < 52; i++)
        {
            if (c == rot13[i])
            {
                *dest = ROT13[i];
                found = 1;
                break;
            }
        }

        if (!found)
        {
            *dest = c;
        }

        s++;
        dest++;
    }

    *dest = '\0';

    return (result);
}
