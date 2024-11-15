#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure to represent a dog.
 * @name: Name of the dog (string).
 * @age: Age of the dog (in years).
 * @owner: Owner of the dog (string).
 * Description: Stores information about a dog.
 */
struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
