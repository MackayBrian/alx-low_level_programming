#include "dog.h"
#include <stdlib.h>
int _strlen(char *str);
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);
/**
 * _strlen-finds lenggth of a string
 * @str:the string to be measured
 * Return:length of str
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}
/**
 * *_strcpy-copies string pointed to new buffer
 * @dest:stores string copy
 * @src:string source
 * Return:pointer do dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * *new_dog-create a new dog
 * @name:name of the dog
 * @age:age of the dog
 * @owner:owner of the dog
 * Return: NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	 dog_t *toffee;

	if (name == NULL || age < 0 || owner == NULL)
	{
		return (NULL);
	}
	toffee = malloc(sizeof(dog_t));
	if (toffee == NULL)
	{
		return (NULL);
	}
	toffee->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (toffee->name == NULL)
	{
		free(toffee);
		return (NULL);
	}
	toffee->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (toffee->owner == NULL)
	{
		free(toffee->name);
		free(toffee);
		return (NULL);
	}
	toffee->name = _strcpy(toffee->name, name);
	toffee->age = age;
	toffee->owner = _strcpy(toffee->owner, owner);
	return (toffee);
}

