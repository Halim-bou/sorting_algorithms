#include "sort.h"

/**
 * bubble_sort - bubble sort algorithm
 * @array: pointer to the array
 * @size: size of the array
 *
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	int tmp;
	int swap;
	size_t i, j;

	for (i = 0; i < size - 1; i++)
	{
		swap = 0;
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				swap = 1;
			}
		}
		print_array(array, size);
		if (swap == 0)
			break;
	}
}
