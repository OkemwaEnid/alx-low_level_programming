#include "main.h"
/**
 * print_most_numbers - print numbers since 0 up to 9
 * Description: print numbers except 2 and 4
 * Return: The numbers since 0 up to 9
 */
void print_most_numbers(void)
{
int x;

for (x = 0 ; x < 10 ; x++)
{
if (x == 2 || x == 4)
{
continue;
}
else
{
_putchar(x + '0');
}
}
_putchar('\n');
}
