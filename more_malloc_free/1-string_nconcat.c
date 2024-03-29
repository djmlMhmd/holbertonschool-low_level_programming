#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to concatenate
 *
 * Return: pointer to newly allocated space
 *         NULL on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat;
unsigned int s1_len = 0, s2_len = 0;


if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";


s1_len = strlen(s1);
s2_len = strlen(s2);

if (n >= s2_len)
n = s2_len;


concat = malloc(s1_len + n + 1);
if (concat == NULL)
return (NULL);

memcpy(concat, s1, s1_len);

memcpy(concat + s1_len, s2, n);

concat[s1_len + n] = '\0';

return (concat);
}
