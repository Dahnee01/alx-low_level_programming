#include "main.h"
#include "main.c"

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