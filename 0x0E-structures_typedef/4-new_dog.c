#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = malloc(sizeof(dog_t));

	if (newDog == NULL)
	{
		return (NULL);
	}
	(*newDog).name = malloc(strlen(name) + 1);
	if ((*newDog).name == NULL)
	{
		free(newDog);
		return (NULL);
	}
	strcpy((*newDog).name, name);
	(*newDog).owner = malloc(strlen(owner) + 1);

	if ((*newDog).owner == NULL)
	{
		free((*newDog).name);
		free(newDog);
		return (NULL);
	}
	strcpy((*newDog).owner, owner);
	(*newDog).age = age;

	return (newDog);
}
