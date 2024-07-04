#include "main.h"

/**
*
* _strncat - function
*
* @dest: param 1
* @src: param 2
* @n: param 3
*
* return: dest
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
        dest[destcount] = src[i];
        destcount++;
    }
     dest[destcount] = '\0';

    return dest;
    
}
