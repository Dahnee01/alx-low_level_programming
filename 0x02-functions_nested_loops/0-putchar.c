#include "_putchar.c"
#include <unistd.h>
#include "main.h"
/**
 * main - Check description
 * Description: It prints the word Holberton, followed by a new line.
 * Return: 0.
 */
int main(void)
{
char name[8]= "_putchar";
for (int i = 0; i < 8; i++)
{
_putchar(name[i]);
}
_putchar('\n');
return (0);
}
