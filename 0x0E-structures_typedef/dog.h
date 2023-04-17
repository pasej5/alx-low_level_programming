#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog object
 * @name: name of the dog
 * @age: dog age
 * @owner: the owner of the dog
 * Description: dog details
 */

struct dog
{
	char* name;
	float age;
	char* owner;
};
struct dog dog_t;
#endif
