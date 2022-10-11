#include "sort.h"


/**
 * partition - Implementationof lomuto partition scheme
 * @array: array to be sorted
 * @start: starting point
 * @end: end point
 * @size: size of array
 *
 * Return: partitioned arrray
 */
int partition(int *array, int start, int end, size_t size)
{
	int pivot = array[end];
	int temp, j, i = (start - 1);

	for (j = start; j < end; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
	}
	if (i + 1 != end)
	{
		temp = array[i + 1];
		array[i + 1] = array[end];
		array[end] = temp;
		print_array(array, size);
	}

	return (i + 1);
}


/**
 * q_sort - algorithm for quick sort
 * @array: pointer to be sorted
 * @start: starting point
 * @end: end point
 * @size: size of array
 */
void q_sort(int *array, int start, int end, size_t size)
{
	int pIndex;

	if (start >= end)
		return;
	pIndex = partition(array, start, end, size);

	q_sort(array, start, pIndex - 1, size);
	q_sort(array, pIndex + 1, end, size);
}

/**
 * quick_sort - sorts an array of ints using quick sort
 * @array: pointer to array to be sorted
 * @size: number of elements in array
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	q_sort(array, 0, size - 1, size);
}
