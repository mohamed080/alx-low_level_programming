#include <stdio.h>

void excute(void) __attribute__ ((constructor));

/**
 * excute - excute sentence before the main
 * function is executed
*/

void excute(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

