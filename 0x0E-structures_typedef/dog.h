#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog object
 * @name: name of the dog
 * @age: dog age
 * @owner: the owner of the dog
 * Return: 0 always
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
