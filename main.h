#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int check_input(const char *format, va_list *);
int print_output(const char *format, va_list *);

#endif
