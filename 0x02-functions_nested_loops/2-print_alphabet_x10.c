#include "main.h"
#include "main.c"
#include "_putchar.c"

void print_alphabet_x10(void)
{
    char ch;
    for (int i = 0; i < 10; i++)
    {
        for ( ch = 'a'; ch < 'z'; ch++)
        {
            _putchar(ch);
        }
        _putchar('\n');
    }
    
}