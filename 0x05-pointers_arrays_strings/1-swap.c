#include <stdio.h>

/**
 * swap_int - Swaps the values of two integers.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 */
void swap_int(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int x = 42;
    int y = 98;

    printf("Before swap: x = %d, y = %d\n", x, y);
    swap_int(&x, &y);
    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;
}
