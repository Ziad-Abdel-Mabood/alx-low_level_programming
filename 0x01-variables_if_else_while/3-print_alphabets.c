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
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	int j;

	for (i = 0; i < 26; i++)
	{
		putchar(alpha[i]);
	}
	for (j = 0; j < 26; j++)
	{
		putchar(alpha[j]);
	}
	putchar('\n');
	return (0);
}
