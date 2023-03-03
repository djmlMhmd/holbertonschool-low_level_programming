#include "main.h"



/**
 * _atoi - function that convert a string to an integer.
 * @s: La chaîne à convertir.
 *
 * Return: La valeur entière de la chaîne.
 */
int _atoi(char *s)
{
int signe = 1, num = 0, chiffre;
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == '-')
signe *= -1;
else if (s[i] >= '0' && s[i] <= '9')
{
chiffre = s[i] - '0';
num = num * 10 + chiffre;
}
else if (num != 0 && s[i] != ' ')
{
return (num *signe);
}
}

return (num *signe);
}
