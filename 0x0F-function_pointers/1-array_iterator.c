#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a
 * parameter on each element of an array.
 * @array: array to execute the function on
 * @size: size of the array
 * @action: pointer to the function to use
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
	{
		return; /* Do nothing if array or action is NULL */
	}

	for (size_t i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
