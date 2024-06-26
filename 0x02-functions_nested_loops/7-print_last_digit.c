#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number to extract the last digit from.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
	int last_digit;

	/* Handle negative numbers properly, including INT_MIN */
	if (n == INT_MIN)
	{
		last_digit = 8;  /* Last digit of INT_MIN is 8 */
		_putchar('0' + last_digit);
		return (last_digit);
	}
	else if (n < 0)
	{
		last_digit = -n % 10;  /* Get last digit of positive equivalent */
	}
	else
	{
		last_digit = n % 10;   /* Get last digit directly for positive numbers */
	}

	_putchar('0' + last_digit); /* Print the last digit as a character */

	return (last_digit); /* Return the last digit */
}
