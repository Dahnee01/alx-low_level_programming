#include "main.h"
/**
 * print_line - a function that draws a straight line in the terminal.
 * followed by a new line.
 * @n: An input integer
 * Return: Always 0
 */
void print_line(int n)
{
int i = 0;
for (; i < n; i++)
{
if (n > 0)
{
_putchar('_');
}
else
{
_putchar('\n');
}
}
_putchar('\n');
}
