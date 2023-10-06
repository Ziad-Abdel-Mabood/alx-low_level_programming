#include <stdio.h>
/*
 * Task 8
 * printing without usual print functions
 * will try using an array
 */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char quot[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(quot, sizeof(quot) - 1, 1, stdout);
	return (1);
}
