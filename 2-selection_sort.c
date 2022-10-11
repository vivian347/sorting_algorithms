#include "sort.h"

/**
 * selection_sort - sorts an array in ascending order using selection sort
 * @array: pointer to the array to be sorted
 * @size: size of the array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, iMin;
	int temp;

	if (size < 2 || array == NULL)
		return;

	for (i = 0; i < size - 1; i++)
	{
		iMin = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[iMin])
				iMin = j;
		}
		if (i == iMin)
			continue;
		temp = array[i];
		array[i] = array[iMin];
		array[iMin] = temp;
		print_array(array, size);
	}
}
