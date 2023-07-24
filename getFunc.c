#include "main.h"

/**
 * getFunc - look up for the specifiers
 * @F: variable to the function
 * Return: function
 */

int (*getFunc(char F))(va_list)
{
	int i = 0;
	spec arr[] = {
		{"c", print_c},
		{"s", print_s},
		{"%", print_percent},
		{"d", print_d},
		{"i", print_i},
		{NULL, NULL}
	};
	while (arr[i].valid)
	{
		if (F == arr[i].valid[0])
			return (arr[i].f);
		i++;
	}
	return (NULL);
}
