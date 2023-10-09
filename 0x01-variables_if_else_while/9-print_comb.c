#include <stdio.h>
/* print the alphabet */
/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int num;

	for (num = 0; num < 9; num++)
	{
		putchar('0' + num);
		putchar(',');
		putchar(' ');
	}
	putchar('0' + num);
	putchar('\n');
	return (0);
}
