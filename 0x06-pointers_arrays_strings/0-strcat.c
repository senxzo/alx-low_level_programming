#include "main.h"

/**
* _strcat - Function name
* @dest: parameter one
* @src: parameter two
* return: dest
*/

char *_strcat(char *dest, char *src)
{
    char *deststr = dest;
    while (*dest != '\0') {
        dest++;
    }
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return (deststr);
    
}
