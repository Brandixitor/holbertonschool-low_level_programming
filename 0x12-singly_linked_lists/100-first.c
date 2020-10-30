#include <stdio.h>
/**
* print_first - function that prints a message before the main fn  execution.
*/

void my_function(void) __attribute__ ((constructor));

void my_function(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
