#include "search_algos.h"
/**
* linear_search - searches array, comparing each individual element to target
*
* @array: pointer to first element of array
* @size: number of elements in array
* @value: target value to search for
* Return: first index if value is located or -1 if value is NULL or not present
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
			return (i);
		printf("Value checked array [%ld] = [%d]\n", i, array[i]);
		if (array == NULL)
			return (-1);
	}
	return (-1);
}
