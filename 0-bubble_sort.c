#include "sort.h"

/**
 * swaping - swap two numbers
 *
 * @a: first number
 * @b: second number
 *
 * Return: (void)
*/
void swaping(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * bubble_sort - sort the array
 *
 * @array: an array of integer
 * @size: size of array
 *
 * Return: (void)
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, ii;

	if (!array || !size)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (ii = 0; ii < size - 1 - i; ii++)

			if (array[ii] > array[ii + 1])
			{
				swaping(&array[ii], &array[ii + 1]);
				print_array(array, size);
			}
	}

}
