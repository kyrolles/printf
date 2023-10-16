#include "main.h" 

int print_string(va_list args)
{
int scount;
char *str = va_arg(args, char*);
if (str != NULL)
{
while (*str)
{
putchar(*str++);
scount++;
}
}
return (scount);
}
