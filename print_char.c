#include "main.h"

/**
 * print_char - this function print's a single char
 * @args: this a number
 *
 * Return: Always 1 (Success)
 */

int print_char(va_list args)
{
char c = va_arg(args, int);
_putchar(c);
if (c == '\n')
{return (1); }
else
{return (1); }
}
