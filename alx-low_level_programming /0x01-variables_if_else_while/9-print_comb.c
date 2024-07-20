#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers
 * separated by ", ", in ascending order, using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int digit;

for (digit = 0; digit < 10; digit++)
{
putchar(digit + '0'); /* Print the digit character */

if (digit < 9)
{
putchar(',');   /* Print comma */
putchar(' ');   /* Print space */
}
}

putchar('\n'); /* Print newline at the end */

return (0);
}
