#ifndef MAIN_H
#define MAIN_H

typedef struct ops
{
	char *c;
	int (*f)();
} op_t;
int _printf(const char *format, ...);
int d_write(va_list args_ptr);
int i_write(va_list args_ptr);
int c_write(va_list args_ptr);
int s_write(va_list args_ptr);
int o_write(va_list args_ptr);
int u_write(va_list args_ptr);
int x_write(va_list args_ptr);
int _putchar(char c);
#endif
