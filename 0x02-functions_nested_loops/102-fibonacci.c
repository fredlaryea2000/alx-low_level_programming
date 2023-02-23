#include <stdio.h>
/**
 * main - print fibonacci numbers.
 * Return: Nothing to returned.
 */
int main(void)
{
unsigned long count, i, p, k;

i = 0;
p = 1;
for (count = 0; count < 50; count++)
{
k = i + p;
i = p;
p = k;
printf("%lu", k);
if (count == 49)
putchar('\n');
else
{
printf(", ");
}
}
return (0);
}
