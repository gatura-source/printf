#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

/**
 * struct ops - carries each modifier and respective function
 * @c: conversion modifer
 * @f: function pointer
 *
 *
 */
typedef struct ops
{
	char *c;
	int (*f)();
} ops_t;
int _printf(const char *format, ...);
int d_write(va_list args_ptr);
int i_write(va_list args_ptr);
int c_write(va_list args_ptr);
int s_write(va_list args_ptr);
int o_write(va_list args_ptr);
int u_write(va_list args_ptr);
int x_write(va_list args_ptr);
int p_write(va_list args_ptr);
int percent_write(void);
char *_strcat(char *dest, char *src);
int _strcmp(char *s1, char *s2);
int _putchar(char c);
int (*getfunc(char *s))(va_list args_ptr);
#ifndef ABS
#define ABS(a) (((a) < 0) ? -(a) : (a))
#endif

#endif
