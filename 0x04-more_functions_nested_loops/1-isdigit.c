#include "main.h"
/**
 * _isupper - A function that checks for isdigit character.
 * @c: An input character
 * Return: 1 if c is isdigit or 0 otherwise
 */
int _isdigit(int c)
{
int number = 1;
int isdigit = 0;

for (; isdigit <= 'Z'; isdigit++)
{
if (c == isdigit)
{
isdigit = 1;
break;
}
}

return (isdigit);
}
