#include "main.h"
/* 
prints out a to z 10 times 
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