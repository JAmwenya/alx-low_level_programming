#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the integers.
 * @a: first integer value to be swapped
 * @b: second integer value to be swapped 
 * Return: Always 0.
*/
void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}
