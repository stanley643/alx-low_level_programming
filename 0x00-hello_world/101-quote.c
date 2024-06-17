#include<string.h>
#include<unistd.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	size_t message_len = strlen(message);

	write(STDERR_FILENO, message, message_len);
	return (1);
}
