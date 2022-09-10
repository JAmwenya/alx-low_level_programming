#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 Always
 */
int main(void)
{
int x;
int y;

for (x = 48; x <= 58; x++)
{
putchar (x);
}
for (y = 'a'; y <= 'f'; y++)
{
putchar (y);
}
putchar('\n');
return (0);
}
