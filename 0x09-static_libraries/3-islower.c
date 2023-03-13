#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
*_islower- checks if a character is a lower case from the english alphabet
*@c: character to test
*Return: 1 if it is lowercase, 0 if it is not
**/

int _islower(int c)
{
return (c >= 'a' && c <= 'z');
}

