#include "main.h"
/**
 * mul - funtion to do multiplication
 * @a: number 1
 * @b: number 2
 * Return: a*b
 *
 */
int mul(int a, int b)
{
	return (a * b);
}
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
	int mult;

	if (argc < 3)
	{
		printf("Error\n");
	}
	else
	{
		for (count = 1; count < argc; count++)
		{
			mult = mul(atoi(argv[1]), atoi(argv[2]));
		}
		printf("%d\n", mult);
	}
	return (0);
}
