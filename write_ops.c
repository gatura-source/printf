#include "main.h"
#include <unistd.h>
#include <stdarg.h>
/**
 * d_write - handles decimals
 * @args_ptr: variadic params list
 *
 * Return: chars printed no.
 */
int d_write(va_list args_ptr)
{
	int i;

	i = i_write(args_ptr);
	return (i);
}
/**
 * c_write - handles chars
 * @args_ptr: variadic params list
 *
 * Return: chars printed no.
 */
int c_write(va_list args_ptr)
{
	char c;

	c = va_arg(args_ptr, int);
	_putchar(c);
	return (1);
}
/**
 * x_write - handles hex
 * @args_ptr: variadic params list
 *
 * Return: chars printed no.
 */
int x_write(va_list args_ptr)
{
	int n;
	int m;
	int i;
	int j;
	char hex[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
		'a', 'b', 'c', 'd', 'e', 'f'};
	char hex_nums[25];

	n = ABS(va_arg(args_ptr, int));
	i = 0;
	while (n > 0)
	{
		m = n % 16;
		hex_nums[i] = hex[m];
		i++;
		n /= 16;
	}
	j = i - 1;
	while (j >= 0)
	{
		_putchar(hex_nums[j]);
		j--;
	}
	return (i);
}
/**
 * o_write - handles octal
 * @args_ptr: variadic params list
 *
 * Return: chars printed no.
 */
int o_write(va_list args_ptr)
{
	int m;
	int n;
	int i;
	int j;
	int oct[25];

	n = ABS(va_arg(args_ptr, int));
	i = 0;
	while (n > 0)
	{
		m = n % 8;
		oct[i] = m;
		i++;
		n /= 8;
	}
	j = i - 1;
	while (j >= 0)
	{
		_putchar(oct[j]);
		j--;
	}
	return (i);
}

/**
 * p_write - handles pointers
 * @args_ptr: variadic params list
 *
 * Return: chars printed
 */

int p_write(va_list args_ptr)
{
	void *p;
	char *nil = "(nil)";
	long int n;
	long int m;
	int j;
	int i;
	char hex[] = {'0', '1', '2', '3', '4', '5', '6',
		'7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
	char hex_n[25];

	p = va_arg(args_ptr, void*);
	if (p == NULL)
	{
		j = 0;
		while (nil[j] != '\0')
		{
			_putchar(nil[j]);
			j++;
		}
		return (j);
	}
	n = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	i = 0;
	while (n > 0)
	{
		m = n % 16;
		hex_n[i] = hex[m];
		i++;
		n /= 16;
	}
	j = i - 1;
	while (j >= 0)
	{
		_putchar(hex_n[j]);
		j--;
	}
	return (i + 2);
}
