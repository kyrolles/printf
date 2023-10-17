#include "main.h"
/**
* _printf - this function print a sentences and can print two type
* of variable and the '%'.
*  @format: The character to print
*
* Return: count.
*/
int _printf(const char *format, ...)
{
spec fun[] = {{'c', print_char}, {'s', print_string},
{'%', print_precent}, {'d', print_decimal}, {'i', print_decimal}};

int x = 0, i = 0, cs = 0, c = 0;
unsigned long  r;

va_list args;
va_start(args, format);

if (!format || (format[0] == '%' && format[1] == ' ' && !format[2]))
{return (-1); }
if (format[0] == '%' && format[1] == ' ' && !format[2])
{return (-1); }
while (format[i])
{
if (format[i] != '%')
{
_putchar(format[i]);
cs++;
}
else
{
for (r = 0; r < (sizeof(fun) / sizeof(fun[0])); r++)
{
if (format[i + 1] == fun[r].c)
{
x = x + fun[r].P(args);
i++;
break;
}
}
}
i++;
}
c = cs + x;
va_end(args);
return (c);
}
