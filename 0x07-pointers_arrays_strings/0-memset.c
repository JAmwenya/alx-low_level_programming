#include "main.h"

/**
 * char *_memset - fills memory with a constant byte.
 * @s: pointer to the function
 * @b: constant byte
 * @n: size of memory to be filled
 *
 * Return:  s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	{
	for (i = 0; i < n; i++)
	*(s + i) = b;

	}
return (s);
}
