#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct print - strucure for printing functions
 * @type_arg: identifier
 * @f: pointer to a printing function
 * Description: struct that stores pointers to a printing function
 */
typedef struct print
{
	char *type_arg;
	int (*f)(va_list, char *, unsigned int);
} print_t;

int _printf(const char *format, ...);
int parser(const char *format, ...);
int print_char(va_list args, char *buf, unsigned int ibuf);
int print_str(va_list args, char *buf, unsigned int ibuf);
int print_prct(va_list __attribute__((unused)), char *, unsigned int);
int print_int(va_list args, char *buf, unsigned int ibuf);
int print_bin(va_list args, char *buf, unsigned int ibuf);
int (*get_print_func(const char *s, int index))(va_list, char *, unsigned int);
int ev_print_func(const char *s, int index);
unsigned int handle_buf(char *buf, char c, unsigned int ibuf);
int print_buf(char *buf, unsigned int ibuf);
char *fill_binary_array(char *binary, long int int_in, int isneg, int limit);

#endif
