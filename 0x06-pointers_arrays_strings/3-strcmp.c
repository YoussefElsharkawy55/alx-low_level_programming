#include "main.h"


int _strcmp(char *s1 ,char *s2)
{
	int equal =0;
	whiel(*s1)
	{
		if(*s1 != *s2)
		{
			equal = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
}
