#include <stdlib.h>
#include "main.h"
#include <stddef.h>
#include <stdarg.h>
#include <string.h>
#include <stdio.h>
/**
 * s_write - handles string
 * @args_ptr: variadic params list
 *
 * Return: chars printed no.
 */

int s_write(va_list args_ptr)
{
	char *s;
	int j;

	s = va_arg(args_ptr, char *);
	j = 0;
	if (s != NULL)
	{
		while (s[j] != '\0')
		{
			j += _putchar(s[j]);
		}
	}
	else
	{
		s = "(null)";
		while (s[j] != '\0')
		{
			j += _putchar(s[j]);
		}
	}
	return (strlen(s));
}
/**
 * percent_write - handles %
 * @args_ptr - variadic params list
 *
 * Return: 1
 */

int percent_write(void)
{
	int len;

	len = _putchar('%');
	return (len);
}
