#include "main.h"

char *_strcat(char *dest, const char *src)
{
	int c, c2;

	for (c = 0; dest[c]; c++)
	{
	}

	for (c2 = 0; src[c2]; c2++)
	{
		dest[c + c2] = src[c2];
	}

	dest[c + c2] = '\0';

	return (dest);
}
