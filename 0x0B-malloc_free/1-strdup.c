#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/*
 * _strlen - Calculate the length of a string.
 *
 * This function calculates the length of a string by counting the number
 * of characters until the null terminator is encountered.
 *
 * @s: Pointer to the string.
 * Return: The length of the string.
 */

int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
	}
	return (a);
}


/**
 * _strdup - Duplicate a string.
 *
 * This function duplicates a string by allocating memory for the duplicate
 * and copying the characters from the input string.
 *
 * @str: Pointer to the string to be duplicated.
 *
 * Return: Pointer to the duplicated string.
 */


char *_strdup(char *str)
{
	char *ptr;
	int size;
	int x;

	if (str == NULL)
	{
		return (NULL);
	}

	size = _strlen(str) + 1;
	ptr = malloc(size * sizeof(char));

	x = 0;
	while (x < size)
	{
		if (ptr == NULL)
		{
			return (NULL);
		}
		ptr[x] = str[x];
		x++;
	}
	return (ptr);
}
