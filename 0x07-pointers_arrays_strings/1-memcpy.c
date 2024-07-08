#include "main.h"

/**
* _memcpy - function name
* @dest: param 1
* @src: param 2
* @n: param 3
* return: dest
*/

 char *_memcpy(char *dest, char *src, unsigned int n)
 {
     unsigned int i;
     for (i = 0; i < n; i++)
     {
         *(dest + i) = *(src + i);
     }
     return (dest);
 }
 