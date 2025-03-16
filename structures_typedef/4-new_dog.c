#include "dog.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * _strlen - counts chars in a string
 * @s: a string to check the amount of chars in
 * Return: length of the string (amount of chars)
 */

int _strlen(char *s)

{
	int length = 0;

	while (s[length] != '\0')

	{
	length++;
	}

	return (length);

}


/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to the resulting string
 */

char *_strncpy(char *dest, char *src)

{
	int i = 0;

	while (src[i] != '\0')

	{
		dest[i] = src[i];
		i++;
	}


	dest[i] = '\0';


	return (dest);

}

/**
 * new_dog - creates a new dog
 * @name: name of a dog
 * @age: age of a dog
 * @owner: owner of a dog
 *
 * Return: pointer to the new dog
 * otherwise NULL
 */

dog_t *new_dog(char *name, float age, char *owner)

{
	dog_t *doggy;
	int len1 = _strlen(name);
	int len2 = _strlen(owner);

	doggy = malloc(sizeof(dog_t));

		if (doggy == NULL)
		{
			free(doggy);
			return (NULL);
		}
	doggy->name = malloc(sizeof(char) * (len1 + 1));

	if (doggy->name == NULL)
	{
		free(doggy);
		return (NULL);
	}

	doggy->owner = malloc(sizeof(char) * (len2 + 1));

	if (doggy->owner == NULL)
	{
		free(doggy);
		free(doggy->name);
		return (NULL);
	}

	doggy->name = _strncpy(doggy->name, name);
	doggy->owner = _strncpy(doggy->owner, owner);
	doggy->age = age;

	return (doggy);

}
