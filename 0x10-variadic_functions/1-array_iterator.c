#include "function_pointers.h"

/**
 * array_iterator - prints array element
 * @array: element to print
 * @size: size of array
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
