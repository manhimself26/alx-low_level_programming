#include <stdlib.h>
#include <stddef.h>
#include "dog.h"
int _strlen(char *str);
char *_strcopy(char *dest, char *scr);
dog_t *new_dog(char *name, float age, char *owner);
/**
 * _strlen - finds length of a string
 * @str: the string to be measured
 * Return: length of the string
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}
/**
 * _strcopy - copies a string pointed to by src, inc;uding the
 * @dest: buffer storing the string copy
 * @src: source string
 * Return: pointer to dest
 */
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];
	dest[index] = '\0';
	return (dest);
}
/**
 * new_dog - creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: owner of the dog
 * Return: the new struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dg;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	dg = malloc(sizeof(dog_t));
	if (dg == NULL)
		return (NULL);
	dg->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dg->name == NULL)
	{
		free(dg);
		return (NULL);
	}
	dg->owner = malloc(sizeof(char) * _strlen(name) + 1);
	if (dg->owner == NULL)
	{
		free(dg->name);
		free(dg);
		return (NULL);
	}
	dg->name = _strcopy(dg->name, name);
	dg->age = age;
	dg->owner = _strcopy(dg->owner, owner);
	return (dg);
}

