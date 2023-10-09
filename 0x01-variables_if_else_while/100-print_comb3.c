#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
/*
 * printing combination of digits
 */
int main(void)
{
	int i = 0;
	int j = 0;
	int arr1[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int arr2[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	for (; i < 9 && j <= 9;)
	{
		if (i < j)
		{
			putchar('0' + arr1[i]);
			putchar('0' + arr2[j]);
			if (i < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
		if (j == 9)
		{
			j = 0;
			i++;
		}
		j++;
	}
	putchar('\n');
	return (0);
}
