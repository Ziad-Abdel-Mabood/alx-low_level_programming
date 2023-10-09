#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
/*
 * printing combination of 3 digits
 */
int main(void)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int arr1[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int arr2[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int arr3[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	for (; i < 9 && j < 9 && k <= 9;)
	{
		if (i < j && j < k)
		{
			putchar('0' + arr1[i]);
			putchar('0' + arr2[j]);
			putchar('0' + arr3[k]);
			if (i < 7)
			{
				putchar(',');
				putchar(' ');
			}
		}
		if (k == 9)
		{
			k = 0;
			j++;
		}
		if (j == 9)
		{
			j = 0;
			i++;
		}
		k++;
	}
	putchar('\n');
	return (0);
}
