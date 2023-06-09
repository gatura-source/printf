#include "main.h"
#include <stddef.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

/**
 * getfunc - getting func pointer
 * @s: conversion specifier
 *
 * Return: No of chars printed
 */

int (*getfunc(char *s))(va_list args_ptr)
{
	ops_t ops[] = {
		{"%s", s_write},
		{"%c", c_write},
		{"%%", percent_write},
		{"%d", d_write},
		{"%i", i_write},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (s && ops[i].c != NULL)
	{
		if (s[0] == (ops[i]).c[0] && s[1] == (ops[i]).c[1])
		{
			return ((ops[i]).f);
		}
		i++;
	}
	return (NULL);
}
