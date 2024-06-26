#include "main.h"

/**
 * _isalpha - check if character is alpha
 * @c: character to be checked
 *
 * Description: Checks if the input character is an alphabetic character
 * (either lowercase or uppercase).
 * Return: 1 if the character is an alphabetic letter, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
