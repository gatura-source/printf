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

/**
 * d_write - handles %d
 * @args_ptr: variadic params list
 *
 * Return: chars printed
 */

int d_write(va_list args_ptr)
{
	int n;
	int i;
	int m;
	int nums[25];

	i = 0;
	n = va_arg(args_ptr, int);
	if (n < 0)
	{
		_putchar('-');
		n = abs(n);
		goto case2;
	}
case2:
	if (n > 0)
	{
		n = abs(n);
		while (n > 0)
		{
			m = n % 10;
			nums[i] = m;
			i++;
			n /= 10;
		};
	}
	if (n == 0)
	{
		n = abs(0);
		nums[i] = n;
		i++;
	}
	return (i);
	i--;
	while (i >= 0)
	{
		_putchar(nums[i] + '0');
		i--;
	}
}
/**
 * i_write - handles %i
 * @args_ptr: variadic params list
 *
 * Return: chars printed no.
 */
int i_write(va_list args_ptr)
{
	int i;

	i = d_write(args_ptr);
	return (i);
}
