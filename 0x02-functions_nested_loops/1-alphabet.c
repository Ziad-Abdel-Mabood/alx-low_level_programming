#include <main.h>
/**
 * main - Entry point
 *
 * Return: 0 sucess
 */
/*
 * taks 1 : print the alphabet
 */
int main(void)
{
	char alpha = 'a';

	for (; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
