#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int _putchar(char c);
int _strlen(char *s);
int _printf(const char *format, ...);
char *_strcpy(char *dest, char *src);
int _puts(char *str);





typedef struct specefier
{

char c;
int (*P)(va_list args);


} spec;

int print_char(va_list args);
int print_string(va_list args);
int print_precent(va_list args);


#endif
