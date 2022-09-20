#include "main.h"
#include <stdio.h>

/**
 * main - updates the value it points to to 98.
 *
 * Return: Always 0.
*/
int main(void)
{

	int i = 98;
	int *n;

	n = &i;

	{
	printf("int value of pointer %d\n", *n);
	}

	return (0);
}
