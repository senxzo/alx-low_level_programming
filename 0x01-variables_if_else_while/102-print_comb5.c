#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of two two-digit numbers,
 * ranging from 00 to 99, separated by ", ", using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j;

for (i = 0; i <= 99; i++)
{
for (j = i + 1; j <= 99; j++)
{
putchar((i / 10) + '0');
putchar((i % 10) + '0');
putchar(' ');
putchar((j / 10) + '0');
putchar((j % 10) + '0');

if (i != 98 || j != 99)
{
putchar(',');
putchar(' ');
}
}
}

putchar('\n');

return (0);
}
