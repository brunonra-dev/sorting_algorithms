#include "sort.h"

/**
 * bubble_sort - sorts an array of integers using the Bubble sort algorithm
 * 
 * @array: array
 * @size: size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i = 1, j = 0;
	int num = 0;

	if (size < 2)
		return;

	while (i == 1)
	{
		i = 0;
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				num = array[j];
				array[j] = array[j + 1];
				array[j + 1] = num;
				i = 1;
				print_array(array, size);
			}
		}
	}
}
