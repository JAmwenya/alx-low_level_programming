#include <stdio.h>

/**
 * main - causes infinite loop
 * Return: 0
 */
int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	while (i < 10)
	{
		putchar(i);/** this is the part of the code that is causing the output to go into an infinite loop */
	}
	printf("infinite loop avoided! \\o/\n");

	return (0);
}
