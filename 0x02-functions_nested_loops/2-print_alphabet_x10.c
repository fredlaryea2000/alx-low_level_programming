#include "main.h"
/**
 * print_alphabet_x10 - alphabet from a-z 10 times.
 * Return: Nothing to be returned.
 * another line here
 */
void print_alphabet_x10(void)
{
char c;
int i = 0;


while (i <= 9)
{
for (c = 'a'; c <=  'z'; c++)
{
_putchar(c);
}
i++;

_putchar('\n');
}
}
