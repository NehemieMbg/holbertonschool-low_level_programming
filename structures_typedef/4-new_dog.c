#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - Prints the lenght of a string
 * @s: is the value to avaluate
 * Return: the value of the string lenght
 */
int _strlen(char *s)
{
	int n;

	n = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	return (n);
}

/**
 * _strdup - returns a pointer to a newly
 * allocated space in memory,
 * which contains a copy of the
 * string given as a parameter
 * @str: Memory to copy
 *
 * Return: a pointer to a newly allocated space
 */
char *_strdup(char *str)
{
	int i;
	char *new;

	if (str == NULL)
	{
		return (NULL);
	}

	new = malloc(sizeof(char) * (_strlen(str) + 1));
	if (new == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		new[i] = str[i];
	}
	new[i] = '\0';
	return (new);
}
/**
 * new_dog - function that create a new dog
 * @name: Pointer to the name to duplicate
 * @age: age to duplicate //since it's a float there is no
 * need to use a pointer
 * @owner: Pointer to the onwner to duplicate
 * Return: NULL if the function fails
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = _strdup(name);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = _strdup(owner);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	new_dog->age = age;


	return (new_dog);
}
