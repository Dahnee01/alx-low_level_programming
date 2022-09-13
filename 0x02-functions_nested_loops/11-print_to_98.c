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
int i; 
for ( i = n; i >= 98; i--)
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
int i;
for ( i = n; i <= 98; i++)
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
