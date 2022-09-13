#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print all the numbers between the provided number and 98
 * @n: integer to start at
 * Return: Void.
 */
void print_to_98(int n)
{
if ( n > 98 )
{
for ( int i = n; i >= 98; i--)
{
if (i != n)
{
printf(", ");
}
printf("%d",i);
}
}
else
{
for (int i = n; i <= 98; i++)
{
if (i != n)
{
printf(", ");
}
printf("%d",i);
}
}
_putchar('\n');
}
