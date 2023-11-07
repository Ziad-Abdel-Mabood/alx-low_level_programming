#include "dog.h"
#include <stdio.h>

/**
 * print_dog -	a function tha tprints a struct dog.
 * @d:		the struct to print.
 * Return:	nothing.
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == 0)
			d->name = "(nil)";

		printf("Name: %s\n", d->name);

		printf("Age: %f\n", d->age);

		if (d->owner == 0)
			d->owner = "(nil)";

		printf("Owner: %s\n", d->owner);
	}
}
