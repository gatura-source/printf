#include <unistd.h>
#include "main.h"

/**
 * _putchar - our standard _putchar
 * @c: char input
 *
 * Return: 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
