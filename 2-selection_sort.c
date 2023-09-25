#include "sort.h"
#include <stdlib.h>

/**
 * swap_element - ....
 * @a: an element from the array
 * @b: second element from array to swap with a
 * Return: Nothing
 */
void swap_element(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * selection_sort - using selection sorting algorithms
 * @array: pointer to the array
 * @size: the size of the array
 *
 * Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, k = 0;

	if (size < 2 || array == NULL)
		return;
	for (; i < size - 1; i++)
	{
		k = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[k])
			{
				k = j;
			}
		}
		if (k != i)
		{
			swap_element(array + i, array + k);
			print_array(array, size);
		}
	}
}
