#include "main.h" 

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
