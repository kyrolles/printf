#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>

int _putchar(char c);
int _strlen(char *s);


typedef struct specefier
{

char c;
int (*P)();


}spec;

int print_char();
int print_string();
int print_precent();


#endif
