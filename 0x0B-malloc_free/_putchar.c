#include "main.h"
/**
 * _putchar - outputs
 * @c: char
 * Return: 1 on success
 */ 

int _putchar(char c)
{
	return (write(1,&c,1));
}
