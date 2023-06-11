#include<unistd.h>
#include "main.h"
/**
 * _putchar -low level printing way
 * Return: write/output
 *@c: char to be printed
 */
int _putchar(int c)
{
	return (write(1, &c, 1));
}
