#include <stdio.h>

void before(void) __attribute__((constructor));

/**
 * before - prints mesage before main executes
 */
void before(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}

