#include<unistd.h>
#include<function_pointers.h>
/**
 * _putchar -low level printing way
 * Return: write/output
 * @c: char to be printed
 */
int _putchar(int c)
	{
		return (write(1, &c, 1));
	}
