#include "main.h"

/**
 * print alphabet- Function that prints alphabet in lower case,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
}
