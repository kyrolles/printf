#include "main.h"

int print_decimal(va_list args)
{
int num,coun = 0;

    num = va_arg(args, int);

    if (num < 0)
    {
        _putchar('-');
        coun++;
        num = -num;
    }

    if (num / 10)
    {
        coun += print_decimal(args);
    }

    _putchar((num % 10) + '0');
    coun++;

    return coun;
}
