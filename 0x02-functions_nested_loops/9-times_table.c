#include "main.h"
/**
 * times_table - echoe the numbers.
 * Return: Nothing.
 */
void times_table(void)
{
int k, j, res;


for (k = 0; k <= 9; k++)
{
for (j = 0; j <= 9; j++)
{
res = (k * j);
if (j != 0)
{
_putchar(',');
_putchar(' ');
}
if (res >= 10)
{
_putchar((res / 10) + '0');
_putchar((res % 10) + '0');
}
else if (res < 10 && j != 0)
{
_putchar(' ');
_putchar((res % 10) + '0');
}
else
_putchar((res % 10) + '0');
}
_putchar('\n');
}
}
