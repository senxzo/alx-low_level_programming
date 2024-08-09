#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	union
	{
		unsigned int i;  /* An unsigned integer */
		char c;          /* A char to test the endianness */
	} test;

	test.i = 1;

	/* If the least significant byte is 1, the system is little endian */
	return (test.c);
}
