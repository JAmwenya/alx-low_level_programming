#include "main.h"

/**
 * _strcmp - determines if strings are equal by comparing them
 * @s1: first string to be compared
 * @s2: second string to be compared
 * Return: 1 if strings are unequal, 0 if equal
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, op = 0;

	while (op == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		op = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (op);
}
