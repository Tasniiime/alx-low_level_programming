#include <stdio.h>

/**
 * main - Prints the lowercase and uppercase letters of the alphabet
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
                putchar(i);
	for (i = 'A' ; i <= 'Z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
