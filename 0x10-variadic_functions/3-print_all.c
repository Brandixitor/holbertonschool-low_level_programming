#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
*print_all - function that prints anything.
*@format: format of argument.
*/

void print_all(const char * const format, ...)
{
unsigned int i = 0, j = 0;
char *s, *p;
va_list ap;

	while (format[j] != '\0')
	j++;
	va_start(ap, format);
		while (i < j)
		{
		p = ", ";
			if (i >= j - 1)
			p = "";
				switch (format[i])
				{
				case 'c':
				printf("%c%s", va_arg(ap, int),  p);
				break;
					case 'i':
					printf("%i%s", va_arg(ap, int),  p);
					break;
						case 'f':
						printf("%f%s", va_arg(ap, double),  p);
						break;
							case 's':
							s = va_arg(ap, char*);
				if (s == NULL)
				{
				s = "";
				p = "";
				}
					printf("%s%s", s,  p);
					break;
				default:
				p = "";
				break;
		}
		i++;
	}
printf("\n");
va_end(ap);
}
