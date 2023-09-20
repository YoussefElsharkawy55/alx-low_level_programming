#include "main.h"

void print_numbers(int n)
{
	unsigned int n1;
	n1 = n;
	
	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}

	if (n1 / 10 != 0)
	{
		print_numbers(n1 / 10);
	}

	_putchar((n1 % 10) + '0');
}
