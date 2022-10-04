#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a new string
 * @str: the string to be duplicated
 * Returns NULL if str = NULL or if insufficient memory was available
 * Return: a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *dup;
	int i, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
		len++;

	dup = (char *)malloc((sizeof(char) * len) + 1);

	if (dup == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		dup[i] = str[i];
	}
	dup[len] = '\0';

	return (dup);
}
