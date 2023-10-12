#include "main.h"
/**
 * print_alphabet - a function that prints the alphabet in lower case
 *
 * Return: 0 sucess
 */
/*
 * taks 0 : print _putchar
 */
void print_alphabet(void)
{
	char  alpha = 'a';

	for (alpha = 'a'; alpha <= 'z' ; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
