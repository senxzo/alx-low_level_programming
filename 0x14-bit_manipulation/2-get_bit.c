#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number to check.
 * @index: The index of the bit to get.
 *
 * Return: The value of the bit at index index, or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1); /* Error: index out of range */
	}

	return ((n >> index) & 1); /* Extract the bit at the given index */
}
