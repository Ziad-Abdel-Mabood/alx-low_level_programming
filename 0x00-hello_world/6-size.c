#include <stdio.h>
/*
 * Task 6
 * print sizes of types on my device
 * use sizeof() operator to declare variables and then print them
 */
/**
 * main - Entry point
 *
 * return : Always 0 (Success)
 */
int main(void)
{
	int character;
	int integer;
	int longnumber;
	int longlong;
	int floatnumber;

	character = sizeof(char);
	integer = sizeof(int);
	longnumber = sizeof(long);
	longlong = sizeof(long long);
	floatnumber = sizeof(float);

	printf("Size of a char: %i byte(s)\n", character);
	printf("Size of an int: %i byte(s)\n", integer);
	printf("Size of a long int: %i byte(s)\n", longnumber);
	printf("Size of a long long int: %i byte(s)\n", longlong);
	printf("Size of a float: %i byte(s)\n", floatnumber);

	return (0);
}
