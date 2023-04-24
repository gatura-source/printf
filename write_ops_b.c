#include <stdlib.h>
#include "main.h"
#include <stddef.h>
#include <stdarg.h>

/**
 * s_write - handles string
 * @args_ptr: variadic params list
 *
 * Return: chars printed no.
 */

int s_write(va_list args_ptr)
{
	char *s;
	int i;

	s = va_arg(args_ptr, char *);
	i = 0;
	if (s != NULL)
	{
		i = 0;
		while (s[i] != '\0')
		{
			_putchar(s[i]);
			i++;
		}
		return (i);
	}
	else
	{
		s = "(null)";
		while (s[i] != '\0')
		{
			_putchar(s[i]);
			i++;
		}
		return (i);
	}
}
/**
 * percent_write - handles %
 * @args_ptr - variadic params list
 *
 * Return: 1
 */

int percent_write(void)
{
	_putchar('%');
	return (1);
}

/**
 * u_write - handles unsigned int
 * @args_ptr: variadic params lis
 *
 * Return: characters printed no.
 */

int u_write(va_list args_ptr)
{
	unsigned int n;
	int j;
	int i;
	int m;
	int nums[25];

	n = va_arg(args_ptr, int);
	i = 0;
	while (n > 0)
	{
		m = n % 10;
		nums[i] = m;
		n /= 10;
		i++;
	}
	j = i - 1;
	while (j >= 0)
	{
		_putchar(nums[j]);
		j--;
	}
	return (i);
}
/**
 * i_write - handles ints
 * @args_ptr: variadic params list
 *
 * Return: i(charcater count)
 */

int i_write(va_list args_ptr)
{
	int n;
	int i;
	int nums[25];
	int m;
	int j;

	n = va_arg(args_ptr, int);
	i = 0;
	if (n < 0)
	{
		_putchar('-');
		n = abs(n);
		while (n > 0)
		{
			m = n % 10;
			nums[i] = m;
			i++;
			n /= 10;
		}
	}
	else
	{
		while (n > 0)
		{
			m = n % 10;
			nums[i] = m;
			i++;
			n /= 10;
		}

	}
	j = i - 1;
	while (j >= 0)
	{
		_putchar(nums[j]);
		j--;
	}
	return (i);
}
