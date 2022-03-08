#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog
 * @name: name
 * @age: age
 * @owner: owner
 * By Danielle Serafim
 * Return: nothing
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *_strdup(char *str);
void free_dog(dog_t *d);

#endif
