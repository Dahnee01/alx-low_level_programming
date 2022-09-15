#include "main.h"
/**
 * print_square - Write a function that prints a square,
 * followed by a new line.
 * @size: An input integer
 * Return: Always 0
 */
void print_square(int size)
{
int i = 0, j = 0;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (; i < size; i++)
{
for (; j < size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
