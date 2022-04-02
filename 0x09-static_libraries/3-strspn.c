
Reg-code
/
alx-low_level_programming
Public
Code
Issues
Pull requests
Actions
Projects
Wiki
Security
Insights
Settings
alx-low_level_programming/0x07-pointers_arrays_strings/3-strspn.c
@Reg-code
Reg-code mycommit
 1 contributor
Executable File  28 lines (26 sloc)  437 Bytes
#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string for checking substring
 * @accept: Accepted chars bof substring
 * Return: length of occurrence
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	char *t = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == (*accept - 1))
		{
			c++;
			break;
		}
		if (!(*--accept))
			break;
		accept = t;
	}
	return (c);
}
