#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order using the
 * Selection sort algorithm
 *
 * @array: array
 * @size: size
 */

void selection_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, x = 1, y = 0;
	int min = 0, now = 0;

	if (!array || size < 2)
		return;

	for (j = 0; j < size - 1; j++)
	{
		y = 0;
		now = array[j];
		for (i = x; i < size; i++)
		{
			if (array[j] > array[i])
			{
				y = 1;
				min = i;
				array[j] = array[i];
			}
		}
		if (y == 1)
		{
			array[min] = now;
			print_array(array, size);
		}
		x++;
	}
}