#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>
#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _printf - printf from the hood
 * @format: conversion formatter
 *
 * Return: chars no.
 */

int _printf(const char *format, ...)
{
	int i;
	int len;
	char *s;
	int (*f)(va_list args_ptr);
	va_list args_ptr;

	i = 0;
	len = 0;
	va_start(args_ptr, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}
	s = malloc(sizeof(char) * 3);
	while (format[i] != '\0')
	{
		if (s != NULL)
		{
			s[0] = format[i];
			s[1] = format[i + 1];
			f = getfunc(s);
			if (f != NULL)
			{
				len += f(args_ptr);
				i = i + 2;
			}
			else
			{
				_putchar(format[i]);
				len++;
				i++;
			}
		}
		bzero(s, 3);
	}
	free(s);
	va_end(args_ptr);
	return (len);
}

