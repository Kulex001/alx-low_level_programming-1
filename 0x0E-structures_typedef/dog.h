#ifndef DOG_H
#define DOG_H
typedef struct dog dog_t;

/**
 * struct dog - create a dog structure
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *, char *, float, char *);
void print_dog(struct dog *);
dog_t *new_dog(char *, float, char *);
void free_dog(dog_t *);
#endif
