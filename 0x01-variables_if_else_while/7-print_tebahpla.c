#include <stdio.h>
/* print the alphabet */
/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a' ; alpha--)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
