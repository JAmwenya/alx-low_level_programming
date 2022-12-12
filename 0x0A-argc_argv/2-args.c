#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc: indicates number of arguments
 * @argv: array that holds the string value of the commands entered
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
