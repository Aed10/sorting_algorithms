#include "sort.h"

/**
 * quick_sort - sorts an array of integers in ascending order
 * using the Quick sort algorithm
 * @array: array of integers
 * @size: size of array
 *
 * Return: void
 */
void	quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	quick_sort_helper(array, 0, size - 1, size);
}

/**
 * quick_sort_helper - sorts an array of integers in ascending order
 * using the Quick sort algorithm
 * @array: array of integers
 * @size: size of array
 * @start: start index
 * @end: end index
 *
 * Return: void
 */
void	quick_sort_helper(int *array, int start, int end, size_t size)
{
	int	pivot;

	if (start < end)
	{
		pivot = partition(array, start, end, size);
		quick_sort_helper(array, start, pivot - 1, size);
		quick_sort_helper(array, pivot + 1, end, size);
	}
}

/**
 * partition - partitions an array of integers in ascending order
 * using the Quick sort algorithm
 * @array: array of integers
 * @size: size of array
 * @start: start index
 * @end: end index
 *
 * Return: void
 */
int	partition(int *array, int start, int end, size_t size)
{
	int	pivot;
	int	i;
	int j, temp;

	pivot = array[end];
	i = start - 1;
	for (j = start; j < end; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			if (i != j)
				print_array(array, size);
		}
	}
	temp = array[i + 1];
	array[i + 1] = array[end];
	array[end] = temp;
	if (i + 1 != end)
		print_array(array, size);
	return (i + 1);
}
