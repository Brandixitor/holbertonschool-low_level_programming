#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
* prt_char - prints a character pointed to by va_list.
* @ch: the character to be printed.
* Return: ..
*/

void prt_char(va_list ch)
{
	printf("%c", va_arg(ch, int));
}

/**
* prt_int - prints an integer pointed to by va_list.
* @in: the integer to be printed.
* Return: ..
*/

void prt_int(va_list in)
{
	printf("%d", va_arg(in, int));
}

/**
* prt_float - prints a float pointed to by va_list.
* @fl: the float to be printed.
* Return: ..
*/

void prt_float(va_list fl)
{
	printf("%f", va_arg(fl, double));
}

/**
* prt_str - prints a string pointed to by va_list.
* @st: the string to be printed.
* Return: ..
*/

void prt_str(va_list st)
{
char *sub;

sub = va_arg(st, char *);
		switch (!sub)
		{
		case 1:
		printf("(nil)");
		break;
		default:
		printf("%s", sub);
		break;
		}
}

/**
* print_all - prints anything.
* @format: a pointer.
* Return: ..
*/

void print_all(const char * const format, ...)
{
int i = 0, j = 0;
va_list elemtopr;
var varray[] = {
		{"c", prt_char},
		{"i", prt_int},
		{"f", prt_float},
		{"s", prt_str},
		{NULL, NULL}
		};

va_start(elemtopr, format);
		while (format != NULL && format[i])
		{
		j = 0;
			while (varray[j].c)
			{
				if (format[i] == *(varray[j].c))
				{
				varray[j].prf(elemtopr);
				break;
				}
			j++;
			}
		if ((format[i + 1]) != '\0' && varray[j].c != NULL)
		printf(", ");
		i++;
		}
va_end(elemtopr);
printf("\n");
}
