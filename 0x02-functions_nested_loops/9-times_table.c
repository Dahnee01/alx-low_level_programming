#include "main.h"
/**
 * times_table - Print 9 times table
 *
 * Return: Void.
 */
void times_table(void)
{
int i, j, multi;
for (j = 0; j < 10; j++)
{
for (i = 0; i < 10; i++)
{
multi = i * j;
if (i == 0)
{
_putchar(multi + '0');
}
else if (multi >= 10)
{
_putchar(' ');
_putchar(multi / 10 + '0');
_putchar(multi % 10 + '0');
}
else
{
_putchar(' ');
_putchar(' ');
_putchar(multi + '0');
}
if (i != 9)
{
_putchar(',');
}
}
_putchar('\n');
}
}
