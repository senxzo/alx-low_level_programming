#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all single digit numbers of base 10
 * starting from 0, followed by a new line, using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
/* Calculate ASCII values for digits 0 to 9 */
int i;
for (i = 0; i < 10; i++)
{
putchar(i + '0');
}

/* Print a newline character */
putchar('\n');

return (0);
}
