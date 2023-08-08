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

	for (count = 0; count < argc; count++)
	{
		while (count == 0)
		{
			printf("%s\n", argv[count]);
			break;
		}


	}
	return (0);
}
