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
	{
		printf("(nil)");
	}
	else if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %6f\n", d->age);
		if (d->owner == NULL)
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Owner: %s\n", d->owner);
		}
	}

}
