#include "sort.h"

/**
 * print_array - prints the array
 *
 * @array: an array of integer
 * @size: size of array
 *
 * Return: (void)
*/
void print_array(int *array, size_t size)
{
	size_t i;
	for (i = 0; i < size; i++)
	{
		if (i < size - 1)
			printf("%i, ", array[i]);
		else
			printf("%i", array[i]);
	}
	printf("\n");
}