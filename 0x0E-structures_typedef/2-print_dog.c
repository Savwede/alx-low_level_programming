#include <stdio.h>
#include "dog.h"
/**
 * print_dog - initialize a variable of type struct dog
 * @d: pointer to a dog object or variable
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		char *Name = (d->name != NULL) ? d->name : "(nil)";
		float Age = d->age;
		char *Owner = (d->owner != NULL) ? d->owner : "(nil)";

		printf("Name: %s\n", Name);
		if (!Age)
			printf("Age: (nil)");
		else
			printf("Age: %.1f\n", Age);
		printf("Owner: %s\n", Owner);
	}
}
