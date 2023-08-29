#include "main.h"

/**
 * _strlen - calculates the legnth of a string
 * @s: the string pointer
 * Return: legnth of a string
 */
int _strlen(char *s)
{
	int count = 0;
	
	while (*(s + count) != '\0')
		count++;
	return (count);
}
