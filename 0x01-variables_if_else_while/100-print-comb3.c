#include <stdio.h>
/*
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
/**
 * printing combination of digits
 */
int main(void)
{
	/*int i=0;
	int j=0;*/
	int arr1[]={0, 1, 2, 3, 4, 5, 6, 7, 8 ,9};
	int arr2[]={0, 1, 2, 3, 4, 5, 6, 7, 8 ,9};
	int comb1 = (arr1[8]*10) + (arr2[4]*1);

	putchar(comb1);
	putchar('\n');
	return (0);
}
