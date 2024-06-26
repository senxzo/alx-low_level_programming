#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * print_to_98 - Prints all natural numbers from n to 98, followed by a new line.
 * @n: Starting number
 */
void print_to_98(int n)
{
    if (n <= 98)
    {
        while (n <= 98)
        {
            _putchar((n / 10) + '0'); /* Print tens digit */
            _putchar((n % 10) + '0'); /* Print units digit */

            if (n != 98)
            {
                _putchar(',');
                _putchar(' ');
            }
            n++;
        }
    }
    else
    {
        while (n >= 98)
        {
            _putchar((n / 10) + '0'); /* Print tens digit */
            _putchar((n % 10) + '0'); /* Print units digit */

            if (n != 98)
            {
                _putchar(',');
                _putchar(' ');
            }
            n--;
        }
    }
    _putchar('\n');
}
