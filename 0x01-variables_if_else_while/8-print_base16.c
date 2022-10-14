#include <stdio.h>

/**
 * main - prints base sixteen numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hex[16] = "0123456789abcdef";
	int i;

	for (i =0; i < 16; i++)
	{
		putchar(hex[i]);
	}
	putchar('\n');
	return (0);
}

