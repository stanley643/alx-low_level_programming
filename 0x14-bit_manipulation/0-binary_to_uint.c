#include "main.h"
/**
 * binary_to_unit - function created
 * @b: value passed
 * Return: results
 */

unsigned int binary_to_uint(const char *b)
{
	int result;
	int i;

	if (b == NULL)
	{
		return 0;
	}
	

	result = 0;
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
		{
			result = result << 1; 
		}
		else if (b[i] == '1')
		{
			result = (result << 1) | 1;
		}
		else
		{
			return 0;  
		}
	}
	return result;
}
