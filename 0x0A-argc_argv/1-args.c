#include "main.h"
/**
 * main - the executing function
 * @argv: argument vector
 * @argc: argument count
 * Return: zero
 *
 */

int main(int argc, char **argv)
{
	int count;
	(void)argv;



	count = (argc - 1);
	printf("%d\n", count);

	return (0);
}
