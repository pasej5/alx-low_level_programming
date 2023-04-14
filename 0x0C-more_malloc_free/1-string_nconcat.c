#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * string_nconcat - this function concatenates 2 strings
 * @s1: string 1 to be concatenated
 * @s2: string 2 to be concatenated
 * @n: memomry to be concatenated
 * Return: returns a pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatenated_string;
	unsigned int length_s1, length_s2, x, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	length_s1 = strlen(s1);
	length_s2 = strlen(s2);

	concatenated_string = malloc(sizeof(char) * (length_s1 + n + 1));
	if (concatenated_string == NULL)
		return (NULL);

	for (x = 0; x < length_s1; x++)
	concatenated_string[x] = s1[x];

	for (j = 0; j < n && j < length_s2; j++)
	concatenated_string[x + j] = s2[j];

	concatenated_string[x + j] = '\0';
	return (concatenated_string);
}
