#include "main.h"
#include <unistd.h>
#include <stdarg.h>

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
