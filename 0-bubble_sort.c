#include "sort.h"

/**
 * bubble_sort - fn that sorts an array of ints in ascending order
 * using bubble sort algos
 *
 * @array: array to be sorted
 * @size: size of the array to be sorted
 */

void bubble_sort(int *array, size_t size)
{
	size_t k, i;
	int flag;
	int temp;

	for (k = 1; k < size; k++)
	{
		flag = 0;
		for (i = 0; i <= size - k - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				flag = 1;
				print_array(array, size);
			}
		}
		if (flag == 0)
			break;
	}
}
