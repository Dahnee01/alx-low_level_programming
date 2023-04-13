#include <stdio.h>
/**
 * main - sums 3-5_cous - Entry point
 *
 * Return:  (0)
 */
int main(void)
{
int i = 0;
int n3 = 3;
int n5 = 5;
int sum = 0;
int lim = 1024;

while (i == 0)
{

if (n3 < lim)
{
sum += n3;
n3 += 3;
}

if (n5 < lim && (n5 % 3) != 0)
{
sum += n5;
n5 += 5;
}
else if (n5 % 3 == 0)
{
n5 += 5;
}

if (n3 >= lim && n5 >= lim)
{
i = 1;
}
}
printf("%d\n", sum);
return (0);
}
