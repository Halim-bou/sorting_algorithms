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
	int swap = 0;
	size_t i;

	while (swap == 0)
	{
		swap = 1;
		if (size < 2)
			break;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
				swap = 0;
			}
		}
	}
}
