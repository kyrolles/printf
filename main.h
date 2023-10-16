#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>

int _putchar(char c);
int _strlen(char *s);
int _printf(const char *format, ...);


typedef struct specefier
{

char c;
int (*P)(va_list args);


}spec;

int print_char(va_list args);
int print_string(va_list args);
int print_precent();


#endif
