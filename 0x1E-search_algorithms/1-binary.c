#include "search_algos.h"
/**
* binary_search - searches target value by dividing data by 2 with each search
*
* @array: pointer to first element of array
* @size: number of elements in array
* @value: target value to search for
* Return: index where value is located or -1 if value is NULL or not present
*/
int binary_search(int *array, size_t size, int value)
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
