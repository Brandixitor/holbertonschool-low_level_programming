#include "lists.h"
#include <stdio.h>
void print_first(void) __attribute__ ((constructor));
/**
* print_first - function that prints a message before the main fn  execution.
*/

void print_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
