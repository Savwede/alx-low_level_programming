#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog.
 * and store a copy of name and owner
 * @name: the dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: a pointer to a newly created dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dprt, Ddog;

	Ddog.age = age;
	Ddog.name = name;
	Ddog.owner = owner;

	dprt = malloc(sizeof(Ddog));
	dprt->age = age;
	dprt->name = name;
	dprt->owner = owner;
	if (dprt)
		return (dprt);
	else
		return (NULL);
}
