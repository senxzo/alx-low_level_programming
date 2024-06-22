#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase,
 * then uppercase, followed by a new line, using
 * the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++)
    {
        putchar(letter);
    }

    // Print uppercase alphabet
    for (letter = 'A'; letter <= 'Z'; letter++)
    {
        putchar(letter);
    }

    // Print a newline character
    putchar('\n');

    return (0);
}
