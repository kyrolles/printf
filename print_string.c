#include "main.h"

/**
 * print_string - this function print's a string
 * @args: this a list
 *
 * Return: Always the count (Success)
 */

int print_string(va_list args)
{
char *str;
int len = 0;

str = va_arg(args, char*);

if (str == NULL)
{
str = "(null)";
}

len = _strlen(str);
_puts(str);

return (len);
}
