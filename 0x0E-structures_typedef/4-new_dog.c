#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *str);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - Finds the length of a string
 * @str: The string to be measured
 *
 * Return: The length of the string
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcopy - copies a string pointed by src, including the terminating null byte
 * @dest: The buffer storing the string copy
 * @src: The source string
 *
 * Return: The pointer to the dest
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
		return (NULL);

	doggo->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (doggo->name == NULL)
	{
		free(doggo);
		return (NULL);
	}

	doggo->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (doggo->owner == NULL)
	{
		free(doggo->name);
		free(doggo);
		return (NULL);
	}

	doggo->name = _strcopy(doggo->name, name);
	doggo->age = age;
	doggo->owner = _strcopy(doggo->owner, owner);
	return (doggo);
}
