#include <stdio.h>

void second(void) __attribute__ ((constructor));

/**
 * first - excute sentence before the main
 * function is executed
*/

void second(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

