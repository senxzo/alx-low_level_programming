#include "main.h"

/**
 * main - Entry point
 *
 * Description - Calls the function to print the alphabet.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
_putchar('\n');
}
