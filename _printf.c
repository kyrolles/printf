#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
* _printf - this function print a sentences and can print two type
* of variable and the '%'.
*  @format: The character to print
*
* Return: count.
*/
int _printf(const char *format, ...)
{

spec fun[] = {{'c', print_char}, {'s', print_string}, {'%', print_precent}};
int x = 0;
int i = 0;
int f = 0;
int cs = 0;
int c = 0;
unsigned long  r;

va_list args;
va_start(args, format);
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
f = 1;
x = x + fun[r].P(args);
i++;
break;
}
}
if (f == 0)
_putchar('%');
}
i++;
}
c = cs + x;
va_end(args);
return (c);
}
