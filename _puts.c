#include"main.h"

/**
  * _puts -  prints a string, followed by a new line, to stdout
  * @str: the string.
  *
	* Return: the length of the string.
  */

int _puts(char *str)
{
char *first = str;
while (*str != '\0')
{
_putchar(*str);
str++;
}
return (str - first);
}
