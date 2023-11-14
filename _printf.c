#include "main.h"
/**
 * print_char - Print a character.
 * @args: A va_list containing the character to print.
 * Return: The number of chars printed (always 1).
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	putchar(c);
	return (1);
}
/**
 * print_string - Prints a string.
 * @args: A va_list containing the string to print.
 *
 * Return: The number of characters printed.
 */
int print_string(va_list args)
{
	char *s = va_arg(args, char*);
	int count = 0;

	while (*s != '\0')
	{
		putchar(*s);
		s++;
		count++;
	}
	return (count);
}
/**
 * print_percent - Print a percent sign.
 * @args: Unused.
 *
 * Return: The total number of chars printed.
 */
int print_percent(va_list args)
{
	(void)args;
	putchar('%');
	return (1);
}
/**
 * _printf - Custom printf function.
 * @format: A format string containing specifiers.
 *
 * Return: The total no. of chars  printed.
 */
int _printf(const char *format, ...)
{
	int i;
	int count = 0;
	va_list args;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;

			switch (format[i])
			{
				case 'c':
					count += print_char(args);
					break;
				case '%':
				{
					putchar('%');
					count += print_percent(args
					break;
				default:
					putchar(format[i]);
					count++;
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
