#include <stdio.h>
#include "main.h"

/**
 * _isalpha - checks alphabetic character
 * @c : caracter check
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{

if (c >= 'a' && c <= 'z')
return (1);
else if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
