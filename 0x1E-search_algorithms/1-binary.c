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
	size_t largest_index = 0;
	size_t smallest_index = size - 1;
	size_t mid;
	size_t i;

	while (largest_index <= smallest_index)
	{
		mid = (largest_index + smallest_index) / 2;

		printf("Searching in array: ");
		for (i = largest_index; i <= smallest_index; i++)
		{
			printf("%d", array[i]);
			if (i < smallest_index)
				printf(",");
		}
		printf("\n");
		if (array[mid] == value)
			return (mid);

		else if (array[mid] < value)
			largest_index = mid + 1;

		else
			smallest_index = mid - 1;

	if (array == NULL)
		return (-1);
	}
	return (-1);
}
