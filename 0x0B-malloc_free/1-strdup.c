#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new space in memory, which contains a copy of the string given.
 * @str: string to duplicate
 * Return: Pointer to a the copied string
 */

char *_strdup(char *str)
{
	char *a;
	int i, c;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	a = malloc(i * sizeof(*a) + 1);
	if (a == NULL)
		return (NULL);

	for (c = 0; c < i; c++)
		a[c] = str[c];
	a[c] = '\0';

	return (a);
}