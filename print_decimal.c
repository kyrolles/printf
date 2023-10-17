#include "main.h"

/**
 * print_decimal - this function print the decimal number.
 * @args: this a number
 *
 * Return: coun (Success)
 */

int print_decimal(va_list args)
{
int num, temp, divisor;
int coun = 0;
num = va_arg(args, int);
temp = num;

if (num < 0)
{
_putchar('-');
coun++;
num = -num;
temp = -temp;
}
divisor = 1;
while (temp / 10)
{
divisor *= 10;
temp /= 10;
}
while (divisor)
{
_putchar((num / divisor) +'0');
coun++;
num %= divisor;
divisor /= 10;
}

return (coun);
}
