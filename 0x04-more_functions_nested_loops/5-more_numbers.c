#include "main.h"

/**
 *more_numbers - function
 *@c: char to use
 */
void more_numbers(void)
{
	int c, i;

	for (c = 0; c <= 14; c++)
	{
		for (i = 1; i <= 10; i++)
		{
			char y = (char)c;
			_putchar(y);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
