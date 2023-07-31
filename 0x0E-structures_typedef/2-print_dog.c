#include <stdio.h>
#include "dog.h"

/**
 * print_dog - funtion that prints a struct dog
 * struct dog - Dog struct
 * @d: dog struct
 *
 * Return: Always 0.
 */

void print_dog(struct dog *d)
{
	if (!d)
		return;
	d->name ? printf("Name: %s\n", d->name) : printf("Name: (nil)\n");
	d->age >= 0 ? printf("Age: %6f\n", d->age) : printf("Age: (nil)\n");
	d->owner ? printf("Owner: %s\n", d->owner) : printf("Owner: (nil)\n");

}
