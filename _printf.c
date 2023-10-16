#include "main.h"
#include <stdio.h>
#include <stdarg.h>

template <class T, class U>{

fun[r].P();
}
spec fun[] = {{'c',print_char},{'s',print_string},{'%',print_precent}};

int _printf(const char *format, ...)
{
va_list arg;
va_start(arg,format);
int i,count_s = 0,count = 0,r;

while (format[i])
{
if (format[i] == '%')
{
i++;
for (r=0 ;i < 3;r++)
{
if(format[i] == fun[r].c)
{

fun[r].P();
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
va_end(arg);
return (count);	
}
