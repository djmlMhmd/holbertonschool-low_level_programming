#include "main.h"

/**
 * _isupper - checks for lowcase charac
 * @c : the charac to be check
 * Return: 1 for uppercase chara or 0 for other
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
