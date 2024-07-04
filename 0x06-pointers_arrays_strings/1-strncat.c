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
    int i;
    int destcount =0;
    for (i = 0; dest[i] != '\0'; i++)
    {
    destcount++;
    }
    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest[destcount + i] = src[i];
        destcount++;
    }
     dest[destcount + i] = '\0';

    return (dest);
    
}
