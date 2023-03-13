#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
*_strncpy - Copy a string
*@dest: The destination value
*@src: The source value
*@n: The copy limit
*Return: char value
*/

char *_strncpy(char *dest, char *src, int n)
{
return (strncpy(dest, src, n));
}

