#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: Starting number
 *
 * Description: Prints numbers separated by commas and a space,
 * starting from n up to 98, followed by a new line.
 */
void print_to_98(int n)
{
    int i;

    if (n <= 98) {
        for (i = n; i <= 98; i++) {
            printf("%d", i);
            if (i != 98)
                printf(", ");
        }
    } else {
        for (i = n; i >= 98; i--) {
            printf("%d", i);
            if (i != 98)
                printf(", ");
        }
    }
    printf("\n");
}
