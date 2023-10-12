#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet in lower case ten times
 *
 * Return: 0 sucess
 */
void print_alphabet_x10(void)
{
	char  alpha = 'a';
	int i;

	for (i = 0; i < 10; i++)
	{
		for (alpha = 'a'; alpha <= 'z' ; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
