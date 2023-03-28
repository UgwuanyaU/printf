#include "main.h"

/**
 * handle_buf - concatenates buffer characters
 * @buf: buffer pointer
 * @c: character to concatenate
 * @ibuf: index of buffer pointer
 * Return: index of buffer pointer
 */
unsigned int handle_buf(char *buf, char c, unsigned int ibuf)
{
	if (ibuf == 1024)
	{
		print_buf(buf, ibuf);
		ibuf = 0;
	}
	buf[ibuf] = c;
	ibuf++;
	return (ibuf);
}
