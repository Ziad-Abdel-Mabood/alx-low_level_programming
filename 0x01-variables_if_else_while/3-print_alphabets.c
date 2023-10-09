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
	char lower = 'a';
	char upper = 'A';

	for (; lower <= 'z'; lower++)
	{
		putchar(lower);
	}
	for (; upper <= 'Z'; upper++)
	{
		putchar(upper);
	}
	putchar('\n');
	return (0);
}
