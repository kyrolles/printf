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
char *str_copy;
int len = 0;

str = va_arg(args, char*);

if (str == NULL)
{
str = "(null)";
}

len = _strlen(str);
/* Allocate memory for the string copy*/
str_copy = malloc((len + 1) * sizeof(char));

if (str_copy == NULL)
{
/* Return an error code if malloc fails*/
return (-1);
}
/* Copy the string to the dynamically allocated memory*/
_strcpy(str_copy, str);
/* Print the string*/
_puts(str_copy);
/* Free the dynamically allocated memory*/
free(str_copy);

return (len);
}
