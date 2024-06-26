#include <stdio.h>

/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: The number defining the size of the table
 */
void print_times_table(int n)
{
	int i, j, product;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			product = i * j;

			if (j != 0)
			{
				printf(", ");
				if (product < 10)
					printf("  ");
				else if (product < 100)
					printf(" ");
			}

			printf("%d", product);
		}
		printf("\n");
	}
}
