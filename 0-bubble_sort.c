#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: array of integers
 * @size: size of array
 * Return: void
 */

void	bubble_sort(int *array, size_t size)
{
	int count;
	int tmp;
	size_t j;

	if (array == NULL || size < 2)
		return ;
	
	count = 1;
	while (count != 0)
	{
		count = 0;
		for (j = 1; j < size; j++)
		{
			if (array[j] <= array[j - 1])
			{
				tmp = array[j];
				array[j] = array[j - 1];
				array[j - 1] = tmp;
				print_array(array, size);
				count += 1;
			}
		}
	}
}
