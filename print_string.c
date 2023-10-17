#include "main.h"

/**
 * print_string - this function print's a string
 * @args: this a list
 *
 * Return: Always the count (Success)
 */

int print_string(va_list args)
{
int scount = 0;
char *str = va_arg(args, char*);
if (str != NULL)
{
while (*str)
{
_putchar(*str++);
scount++;
}
}
return (scount);
}
