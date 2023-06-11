#include "main.h"

void print_line(int n)
{
	int i;
	char c = '_';

	if (n>0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
