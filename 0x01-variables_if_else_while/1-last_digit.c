#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
* main - Entry point
*
* description: last digit string
*
* Return: 0 Always
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n % 10 > 0)
{
printf("and is greater than 5\n", n);
}
else if (n % 10 == 0)
printf("and is 0\n", n);
}
else if (n % 10 < 6 && n % 10 != 0)
printf("and is less than 6 and not 0\n", n);
return (0);
}
