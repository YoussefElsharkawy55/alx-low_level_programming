#include "main.h"

void prints_numbers(int n)
{
	unsigned int n1;
	n1=n;
	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}	
	if (n1 / 10 != 0)
	{
		prints_numbers(n1 / 10);
	}
	_putchar((n1 % 10) + '0');
}
