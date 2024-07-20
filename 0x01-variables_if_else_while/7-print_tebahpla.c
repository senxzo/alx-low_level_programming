#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet in reverse,
 * followed by a new line, using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter;

/* Start from 'z' and go down to 'a' */
for (letter = 'z'; letter >= 'a'; letter--)
{
putchar(letter);
}
/* Print a newline character */
putchar('\n');

return (0);
}
