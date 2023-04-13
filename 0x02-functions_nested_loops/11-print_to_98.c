#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print all the numbers between the provided number and 98
 * @n: integer to start at
 * Return: Void.
 */
void print_to_98(int n)
{
if (n <= 98)
{
for (; n <= 98; n++)
{
printf("%d", n);

if (n == 98)
{
continue;
}
printf(", ");
}
printf("\n");
}
else
{
for (; n >= 98; n--)
{
printf("%d", n);

if (n == 98)
{
continue;
}
printf(", ");
}
printf("\n");
}
}
