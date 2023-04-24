#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strcmp - works like strcmp
 * @s1: input 1
 * @s2: input 2
 *
 * Return: 0 on success
 */

int _strcmp(char *s1, char *s2)
{
	size_t s1_len;
	size_t i;
	int x;
	int y;
	int res;

	s1_len = strlen(s1);
	for (i = 0; i <= s1_len; i++)
	{
		x = s1[i];
		y = s2[i];

		res = x - y;
		if (res == 0)
		{
			;
		}
		else
		{
			break;
		}

	}
	return (res);
}


