#include "unistd.h"

/**
* _putchar - write the character c to stdout
* @c : the character to print
* Return: On 1 (Success)
* On error, -1 is returned, and errno is set appropriately.
*/

int _putchar(char c)
{

return (write(1, &c, 1));

}
