#include "main.h"
#include "main.c"
#include "_putchar.c"

void print_alphabet(void)
{
char ch;
for ( ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
