#include <stdio.h>
/*
 * print the alphabet
 * lower case then upper case then newline
 */
/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	char number = '0';
	char letter = 'a';

	for (; number <= '9'; number++)
	{
		putchar(number);
	}
	for (; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
