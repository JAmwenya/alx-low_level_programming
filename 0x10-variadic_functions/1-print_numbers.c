#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers.
 * @n: number of arguments
 * @separator: number seperator.
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	/* creating va_list to store the variable argument list */
	va_list number;
	unsigned int count;

	/* initialise va_list for the number of arguments */
	va_start(number, n);

	/* loop through/access all arguments stored in the va_list */
	for (count = 0; count < n; count++)
	{
		printf("%d", va_arg(number, unsigned int));
		if (count < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(number);
	printf("\n");
}
