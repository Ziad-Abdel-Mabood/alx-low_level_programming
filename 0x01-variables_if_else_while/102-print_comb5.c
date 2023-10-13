#include <stdio.h>

/**
 * main - entry point
 * Return: always 0
 */
int main(void)
{
	int n1 = 0;
	int n2 = 1;

	for (; n1 < 99;)
	{
		while (n2 <= 99)
		{
			if (n1 < n2)
			{
				putchar('0' + (n1 / 10));
				putchar('0' + (n1 % 10));
				putchar(' ');
				putchar('0' + (n2 / 10));
				putchar('0' + (n2 % 10));
				if (n1 < 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			n2++;
		}
		n2 = 0;
		n1++;
	}
	putchar('\n');
	return (0);
}
