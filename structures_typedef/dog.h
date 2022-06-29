#ifndef DOG_H
#define DOG_H

/**
 * struct dog - is the new type defined
 * @name: is the name to assign
 * @age: is the age to assign
 * @owner: is the owner to assign
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);



#endif /* DOG_H */
