#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
*_strncat - Concatenates two strings
*@dest: The destination value
*@src: The source value
*@n: The limit of the concatenation
*Return: A pointer to the resulting string dest
**/

char *_strncat(char *dest, char *src, int n)
{
return (strncat(dest, src, n));
}

