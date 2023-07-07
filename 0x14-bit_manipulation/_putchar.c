#include "main.h"

/**
 * _putchar - function that writes on behalf of printf
 * @c: character been passed
 * Return: write
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
