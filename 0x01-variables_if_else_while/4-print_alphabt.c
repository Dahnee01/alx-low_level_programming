#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int ch;
char q = 'q';
char e = 'e';
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch == q || ch == e)
{
}
else
{
putchar(ch);
}
}
putchar('\n');
return (0);
}
