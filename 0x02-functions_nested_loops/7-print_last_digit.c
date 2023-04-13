#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *@r: number being tested
 * Return: Always 0.
 */
int print_last_digit(int r)
{
int n;
int b;
b = r % 10;
if (r < 0)
{
n = -1 * b;
}
else
{
n = b;
}
_putchar((n % 10) + '0');
return (n % 10);
}
