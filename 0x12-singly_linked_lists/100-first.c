#include <stdio.h>
void startup(void) __attribute__((constructor));

/**
 * startup - code to execute before main fn
 */
void startup(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
