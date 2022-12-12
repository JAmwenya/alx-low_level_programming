#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: number of times the '\' char is printed
 * Return: 0
 */

void print_diagonal(int n)
{
	int i;
	int count;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i <= n)
		{
			for (count = 0; count < i; count++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
		_putchar('\n');
	}
}