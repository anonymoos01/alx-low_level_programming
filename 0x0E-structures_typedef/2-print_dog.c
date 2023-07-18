#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - prints a struct dog
 * @d: struct dog to print
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (!(d->name))
			d->name = "(nil)";
		if (!(d->owner))
			d->owner = "(nil)";
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}


