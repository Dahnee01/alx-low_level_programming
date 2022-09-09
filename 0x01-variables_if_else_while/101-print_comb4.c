#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j, k;

for (i = 48; i <= 57; i++)
{
for (j = 48; j <= 57; j++)
{
for (k = 48; k <= 57; k++){
if (i == j || i == k || j == k || j <= i || k <= j)
{
}
else
{
putchar(i);
putchar(j);
putchar(k);
if (i == 56 && j == 56 && k == 57)
{
}
else
{
putchar(44);
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}