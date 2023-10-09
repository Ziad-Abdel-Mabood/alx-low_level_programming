#include <stdio.h>
/*
 * print the alphabet
 * lower case but no q or e
 */
/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	char lower = 'a';

	for (; lower <= 'z'; lower++)
	{
		if (lower != 'q' && lower != 'e')
			putchar(lower);
	}
	putchar('\n');
	return (0);
}
