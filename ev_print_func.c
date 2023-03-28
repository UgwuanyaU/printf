#include "main.h"

/**
 * ev_print_func - return the amount of identifiers
 * @s: arg identifier
 * @index: index of arg identifier
 * Return: amount of identifiers
 */
int ev_print_func(const char *s, int index)
{
	print_t pr[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_prct},
		{"d", print_int},
		{"i", print_int},
		{"b", print_bin},
		{NULL, NULL},
	};
	int i = 0, j = 0, first_index;

	first_index = index;
	while (pr[i].type_arg)
	{
		if (s[index] == pr[i].type_arg[j])
		{
			if (pr[i].type_arg[j + 1] != '\0')
				index++, j++;
			else
				break;
		}
		else
		{
			j = 0;
			i++;
			index = first_index;
		}
	}
	return (j);
}
