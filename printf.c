#include "main.h"
#include <stddef.h>
#include <stdarg.h>

/**
 * _printf - function that produces output according to a format
 * @format: character string
 * Return:  number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list original, copy;
	int n_printed = 0, error = 0;

	if (format == NULL || *format == '\0')
		return (-1);

	va_start(original, format);
	va_copy(copy, original);

	error = check_input(format, &original);


	if (error != 0)
	{
		return (error * -1);
	}

	n_printed = print_output(format, &copy);

	va_end(original);
	va_end(copy);

	return (n_printed);
}

