#include "main.h"
/**
 * reverse_array - reverse array function
 * @a:array param
 * @n:integer
 * Return:void
 */
void reverse_array(int *a, int n)
{
int i, c;

for (i > 0; i = (n - 1); i--)
	{
	c = a[i];
	a[i] = a[n - 1 - i];
	a[n - 1 - i] = c;
	}
}
