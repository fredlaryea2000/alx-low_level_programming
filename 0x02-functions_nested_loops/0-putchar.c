#include "main.h"
/**
 * main - prints the string "_putchar" from a character array.
 * Return: 0 on success.
 */
int main(void)
{
char y[] = {'_', 'p', 'u', 't', 'c', 'h',
	    'a', 'r'};
int h = 0;
while (y[h] != '\0')
{
_putchar(y[h]);

h++;
}
_putchar('\n');
return (0);
}

