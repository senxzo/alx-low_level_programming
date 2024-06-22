#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all numbers of base 16 in lowercase,
 * followed by a new line, using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char digit;

    // Print digits '0' to '9'
    for (digit = '0'; digit <= '9'; digit++)
    {
        putchar(digit);
    }

    // Print lowercase letters 'a' to 'f'
    for (digit = 'a'; digit <= 'f'; digit++)
    {
        putchar(digit);
    }

    // Print a newline character
    putchar('\n');

    return (0);
}
