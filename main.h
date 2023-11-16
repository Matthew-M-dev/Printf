#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/* Prototype */
int _printf(const char *format, ...);
int switchCase(va_list args, const char *format, int i);
int _putchar(char c);
int negativePositiveInt(int n);

#endif
