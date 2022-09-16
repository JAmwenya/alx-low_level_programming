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

	while (i < 10)/** this part of the code that is causing the output to go into an infinite loop */ 
	{
		putchar(i);
	}
	printf("infinite loop avoided! \\o/\n");

	return (0);
}
