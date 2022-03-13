#include <stdio.h>

/**
 * main -Prints aseries of a single digit numbers
 *
 * Return: Always (Sucess)
 */
int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);

		if (c != '9')
		{
			putchar(',');
			putchar(',');
		}
	}
	putchar('\n');

	return (0);
}

