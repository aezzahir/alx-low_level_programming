#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * _strlen - len of string
 * @s: string
 * Return: the lenght of the string
 */
int _strlen(char *s)
{
int compt = 0;
int i = 0;
while (s[i] != '\0')
{
compt++;
i++;
}
return (compt);
}
/**
 * _strcpy - copies the string pointed to by src to the one pointed to by dest
 * @dest: the destination
 * @src: the source
 * Return: returns the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; i <= _strlen(src); i++)
{
dest[i] = src[i];
}
return (dest);
}
/**
 * new_dog -  creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: Returns a pointer to the new dog that has been created
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
{
return (NULL);
}
new_dog->name = (char *)malloc(_strlen(name) + 1);
if (new_dog->name == NULL)
{
free(new_dog);
return (NULL);
}
_strcpy(new_dog->name, name);
new_dog->owner = (char *)malloc(_strlen(owner) + 1);
if (new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog);
return (NULL);
}
_strcpy(new_dog->owner, owner);
new_dog->age = age;
return (new_dog);
}
