#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @src: The source of strings
 * @dest: The destination of the string
 * @n: The length of int
 *
 * Return: pointer to the resulting string dest
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
