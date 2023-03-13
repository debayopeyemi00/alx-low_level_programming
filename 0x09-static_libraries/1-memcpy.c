#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
* _memcpy - Copies memory area
*
* @dest: where to copy the memory to
* @n: the number of bytes
* @src: the memory area to copy from
*
* Return: a pointer to @dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
return (memcpy(dest, src, n));
}

