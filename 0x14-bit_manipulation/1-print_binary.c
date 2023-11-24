#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	putchar ((n & 1) + '0');
}
