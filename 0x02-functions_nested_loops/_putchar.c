#include <unistd.h>

/**
 * _putcahr - writes the character c to stdout
 * @c: the character to print
 *
 * Return: Always on success 1.
 * On error -1 is returned, and error is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

