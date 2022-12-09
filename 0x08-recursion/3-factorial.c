#include "main.h"

/**
* factoral - returns the factoral of a given number
* @n: number that is to be factored
* Return: factoral of the number
*/
int factorial(int n)
{
        if (n < 0)
            return (-1);
        else if (n == 0)
                return (1);
        else
                return (n * factorial(n - 1));
}
