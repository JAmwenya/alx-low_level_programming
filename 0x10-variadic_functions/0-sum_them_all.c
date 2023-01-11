#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: number of arguments
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	/* creating va_list to store the variable argument list */
	va_list parameters;
	unsigned int count;
	int sum;

	if (n == 0)
		return (0);
	sum = 0;

	/* initialize va_list for the number of arguments */
	va_start(parameters, n);

	/* loop through/access all arguments stored in the va_list */
	for (count = 0; count < n; count++)
		sum += va_arg(parameters, int);
	va_end(parameters);
	return (sum);
}
