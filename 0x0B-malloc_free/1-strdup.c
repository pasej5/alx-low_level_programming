#include <stdlib.h>
#include <string.h>

/**
 * _strdup -  function that returns a pointer to a newly allocated space
 * @str: string
 *
 * Return: Returns NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *duplicateString;
	size_t length, i;

	if (str == NULL)
	return (NULL);

	length = strlen(str);
	duplicateString = malloc(sizeof(char) * (length + 1));
	if (duplicateString == NULL)
	return (NULL);

	for (i = 0; i <= length; i++)
	duplicateString[i] = str[i];

	return (duplicateString);
}
