#include "main.h"
#include <stdlib.h>

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
	{
		return (-1);
	}
	*n |= (1UL << index);
	return (1);
}
