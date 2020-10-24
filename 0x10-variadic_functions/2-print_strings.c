#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_strings - function that prints strings, followed by a new line.
* @separator: pointer to a char.
* @n: number of elements.
**/

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
va_list list;
char *p;

	if (n != 0)
	va_start(list, n);
		while (i < n)
		{
		p = va_arg(list, char*);
			if (p == NULL)
			printf("(nil)");
		else
			printf("%s", p);
			if (i != n - 1 && separator != NULL)
			printf("%s", separator);
			i++;
		}
printf("\n");
va_end(list);
}
