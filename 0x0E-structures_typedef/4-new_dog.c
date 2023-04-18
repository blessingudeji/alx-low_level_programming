#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
* new_dog - a function that creates a new dog
* @name: the name of the dog
* @age: the dog's age
* @owner: the owner
* Return: a pointer or NULL
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	int a = 0, b = 0, c;
	dog_t *new_dog;

	while (name[a] != '\0')
		a++;
	while (owner[b] != '\0')
		b++;
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = malloc(a * sizeof(new_dog->name));
	if (new_dog->name == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (c = 0; c <= a; c++)
		new_dog->name[c] = name[c];
	new_dog->age = age;
	new_dog->owner = malloc(b * sizeof(new_dog->owner));
	if (new_dog->owner == NULL)
	{
		free(new_dog->owner);
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (c = 0; c <= b; c++)
		new_dog->owner[c] = owner[c];
	return (new_dog);
}

