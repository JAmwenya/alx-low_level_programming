#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s:  the string to be searched
 * @c: character to be searched
 * Return: pointer to first occurence of a character
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + 1) != '\0'; i++)
		if (*(s + 1) == c)
			return (s + 1);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
