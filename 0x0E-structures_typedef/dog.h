#ifndef dog_H
#define dog_H
/**
 * struct dog - Define a new type
 * @name: name dog
 * @age: age dog
 * @owner: owner dog
 */
struct dog
{
	char *name;
	float age;

	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
