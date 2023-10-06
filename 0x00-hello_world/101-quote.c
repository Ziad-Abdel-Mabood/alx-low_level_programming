#include <stdio.h>
/*
 * Task 8
 * printing without printf() or puts()
 * will try using an array
 */
/*
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	
	fwrite(quote, sizeof(quote) - 1, 1, stdout);
	return (1);
}
