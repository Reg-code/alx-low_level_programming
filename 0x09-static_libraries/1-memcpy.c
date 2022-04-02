#include "main.h"

/**
 * _memcpy - irontnoux2
 * @dest: pointer to a xhar params
 * @src: pointer ro char params
 * @n: size
 * Return: *dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
