#include "main.h"
#include <stdio.h>
/**
 * print_prct - writes the character c to stdout
 * @a: input char
 * @buf: buffer pointer
 * @i: index for buffer pointer
 * Return: On success 1.
 */
int print_prct(va_list a __attribute__((unused)), char *buf, unsigned int i)
{
	handle_buf(buf, '%', i);
	return (1);
}
