#include "function_pointers.h"
#include <stdio.h>
/**
* print_name - function that prints a name.
* @name: char.
* @f: pointer to a function.
* Return: void.
*/

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
	f(name);
}
