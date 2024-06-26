#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with 1 and 2.
 *        Numbers are separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long fib1_part1 = 0, fib1_part2 = 1;
	unsigned long fib2_part1 = 0, fib2_part2 = 2;
	unsigned long temp1, temp2;
	int count;

	printf("%lu, %lu", fib1_part2, fib2_part2);

	for (count = 2; count < 98; count++)
	{
		temp1 = fib1_part1 + fib2_part1;
		temp2 = fib1_part2 + fib2_part2;
		if (temp2 > 999999999)
		{
			temp1 += temp2 / 1000000000;
			temp2 %= 1000000000;
		}

		printf(", %lu", temp1 ? temp1 : temp2);
		if (temp1)
			printf("%lu", temp2);

		fib1_part1 = fib2_part1;
		fib1_part2 = fib2_part2;
		fib2_part1 = temp1;
		fib2_part2 = temp2;
	}

	printf("\n");
	return (0);
}
