#ifndef INV_TREE_H
#define INV_TREE_H
/**
 * struct dog - contains information about a dop object.
 * @name: the dog's name
 * @age: dog's age
 * @owner: dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
	/*dog - contains information about a dop object.*/
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
