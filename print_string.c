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
    str_copy = malloc((len + 1) * sizeof(char)); /* Allocate memory for the string copy*/

    if (str_copy == NULL)
    {
        return (-1); /* Return an error code if malloc fails*/
    }

    _strcpy(str_copy, str); /* Copy the string to the dynamically allocated memory*/
    _puts(str_copy); /* Print the string*/
    free(str_copy); /* Free the dynamically allocated memory*/

    return (len);
}
