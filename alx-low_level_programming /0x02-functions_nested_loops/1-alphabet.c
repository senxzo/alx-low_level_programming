#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase,
 *
 * Description: Prints the alphabets print_alphabet followed by a new line.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void) /* print_alphabet function */
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
_putchar('\n');
}
