#include "main.h"

/**
 * main - Entry point
 *
 * Description: Prints alphabets followed by a new line.
 *
 * print_alphabet - Prints the alphabet in lowercase,
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
