#include "main.h"
/**
 * main - Entry point
 * @p[]: characters to print
 *
 * Return: 0 sucess
 */
/*
 * taks 0 : print _putchar
 */
int main(void)
{
	int i;
	char p[] = "_putchar";

	for (i = 0; i < 9 ; i++)
	{
		_putchar(p[i]);
	}
	_putchar('\n');
	return (0);
}
