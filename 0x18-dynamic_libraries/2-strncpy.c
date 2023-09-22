#include "main.h"

/**
 * _strncpy - copies a string to another memory location
 * @src: source string to be copied
 * @dest: destination location of copied string
 * @n: total number of characters copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	
	for (i = 0; i < n && src[i] != '\0'; ++i)
		dest[i] = src[i];
	for ( ; i < n; ++i)
		dest[i] = '\0';
	
	return (dest);
}
