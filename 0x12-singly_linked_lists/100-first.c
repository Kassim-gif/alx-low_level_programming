#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - prints bfr  main function is executed
 *
 *
 */
void first(void)
{
	char str1[] = "You're beat! and yet, you must allow,";
	char str2[] = "I bore my house upon my back!";

	printf("%s\n%s\n", str1, str2);
}
