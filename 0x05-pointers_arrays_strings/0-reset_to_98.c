#include "main.h"

/**
 * reset_to_98 - Updates the value of the integer it points to to 98.
 * @n: Pointer to an int.
 */
void reset_to_98(int *n)
{
    *n = 98;
}

int main(void)
{
    int value = 42;
    printf("Before: %d\n", value);
    reset_to_98(&value);
    printf("After: %d\n", value);
    return 0;
}
