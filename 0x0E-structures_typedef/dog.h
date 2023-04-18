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

/**
 * dog_t - typdef for struct dog
 *
 */

typedef struct dog dog_t;


typedef struct dog
{
    char name[50];
    int age;
    char breed[50];
}
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
