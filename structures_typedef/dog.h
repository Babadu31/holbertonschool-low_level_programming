#ifndef DOG_H
#define DOG_H

/**
 * struct dog - informations chiens
 * @name: première information
 * @age: deuxième information
 * @owner: troisième information
 */

struct dog
{
char *name;
float age;
char *owner;
};

/**
 * dog_t - typedef pour struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
