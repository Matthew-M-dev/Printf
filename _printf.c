#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * _printf - function that produces output
 * @format: a character string
 * Return: string length
 */

int _printf(const char *format, ...)
{
	int i = 0, count = 0, k = 0;
	va_list args;

	if (format == NULL)
                return (-1);
	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				return (-1);
			if (format[i] != '\0')
			{
				k = switchCase(args, format, i);
				count += k;
			}
		}
		else
		{
			putchar(format[i]);
			count++;
		}
	}
	va_end(args);
	return (count);
}
