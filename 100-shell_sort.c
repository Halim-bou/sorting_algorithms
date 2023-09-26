#include "sort.h"
#include <stddef.h>

/**
 * swap_element - swap element int the array
 * @a: first element
 * @b: secod element
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
 * shell_sort - shell sorting algorithms
 * @array: the array to be sorted
 * @size: size of the array
 * Return: Nothing
 */
void shell_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, gap;

	if (array == NULL || size < 2)
		return;
	for (gap = 1; gap < (size / 3);)
		gap = gap * 3 + 1;
	for (; gap >= 1; gap /= 3)
	{
		for (j = gap; j < size; j++)
		{
			i = j;
			while (i >= gap && array[i - gap] > array[i])
			{
				swap_element(array + i, array + (i - gap));
				i -= gap;
			}
		}
		print_array(array, size);
	}
}
