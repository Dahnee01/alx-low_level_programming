#include "main.h"
/**
 * print_alphabet_x10 - Check alx
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: Nothing.
 */
void print_alphabet_x10(void)
{
int a = 0;
while (a < 10)
{
char b = 'a';
while (b <= 'z')
{
_putchar(b);
b++;
}
_putchar('\n');
a++;
}
}
