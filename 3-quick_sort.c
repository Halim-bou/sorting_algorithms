#include "sort.h"
#include <stdlib.h>

void swap_element(int *a, int *b);
int partition(int *array, size_t size, int lo, int hi);
void sort_recursive(int *array, size_t size, int lo, int hi);
void quick_sort(int *array, size_t size);
/**
 * swap_element - ....
 * @a: ....
 * @b: ....
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
 * partition - Lomuto partition scheme
 * @array: the array to work with
 * @lo: lower element
 * @hi: higher element
 * @size: the size of the array
 * Return: the pivot index.
 */
int partition(int *array, size_t size, int lo, int hi)
{
	int *pivot, i, j;

	pivot = array + hi;
	for (i = j = lo; j < hi; j++)
	{
		if (array[j] < *pivot)
		{
			if (i < j)
			{
				swap_element(array + j, array + i);
				print_array(array, size);
			}
			i++;
		}
	}
	if (array[i] > *pivot)
	{
		swap_element(array + i, pivot);
		print_array(array, size);
	}
	return (i);
}

/**
 * sort_recursive - quick sort recursively
 * @array: the array
 * @size: size of the array
 * @lo: lower element
 * @hi: higher element
 * Return: Nothing
 */
void sort_recursive(int *array, size_t size, int lo, int hi)
{
	int pivot;

	if (lo < hi)
	{
		pivot = partition(array, size, lo, hi);
		sort_recursive(array, size, lo, pivot - 1);
		sort_recursive(array, size, pivot + 1, hi);
	}
}

/**
 * quick_sort - quick sorting algorithm
 * @array: the array to be sorted
 * @size: the size of the array
 * Return: Nothing
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2 || array == NULL)
		return;
	sort_recursive(array, size, 0, size - 1);
}
