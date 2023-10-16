#include "main.h"
#include <stdio.h>
#include <stdarg.h>

spec fun[] = {{'c',print_char},{'s',print_string},{'%',print_precent}};

int _printf(const char *format, ...)
{
int i = 0;
unsigned long  r;
int count_s = 0;
int count = 0;

va_list args;
va_start(args,format);

while (format[i])
{
if (format[i] == '%')
{

for (r = 0; r < (sizeof(fun) / sizeof(fun[0])); r++)
{
if(format[i + 1] == fun[r].c)
{
fun[r].P(args);
i++;
break;
}
}
}
else
{
_putchar(format[i]);
count_s++;
}
i++;
}



count = count_s;
va_end(args);
return (count);	
}
