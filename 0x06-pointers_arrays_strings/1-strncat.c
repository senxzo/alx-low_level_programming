#include "main.h"

/**
 * _strncat - Concatenates up to n characters from the src string
 *            to the dest string.
 * @dest: Destination string.
 * @src: Source string.
 * @n: Maximum number of characters to concatenate.
 *
 * Return: Pointer to the resulting dest string.
 */
char *_strncat(char *dest, char *src, int n)
{
    int i, j;
    int destcount =0;
    for (i = 0; dest[i] != '\0'; i++)
    {
    destcount++;
    }
    for (j = 0; j < n && src[j] != '\0'; j++) {
        dest[destcount + j] = src[j];
    }
     dest[destcount + j] = '\0';

    return (dest);
    
}
