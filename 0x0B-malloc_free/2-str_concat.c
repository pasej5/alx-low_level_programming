#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * str_concat - this function concatenates 2 strings
 * @s1: string to be concatinated
 * @s2: string to be concatinated
 *
 * Return: On success, returns a pointer to a newly allocated
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int s1_len = 0, s2_len = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1_len])
		s1_len++;

	while (s2[s2_len])
		s2_len++;

	concat_str = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (concat_str == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
	concat_str[i] = s1[i];

	for (j = 0; j < s2_len; j++)
		concat_str[i + j] = s2[j];

	concat_str[i + j] = '\0';

	return (concat_str);
}

