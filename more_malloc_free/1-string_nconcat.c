#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: the first string.
 * @s2: the second string.
 * @n: the number of bytes to concatenate from s2.
 * Return: a pointer to the newly allocated space.
 * If the function fails, it should return NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1 = 0, len2 = 0, i;
char *concat;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[len1] != '\0')
len1++;
while (s2[len2] != '\0')
len2++;
if (n >= len2)
n = len2;
concat = malloc(len1 + n + 1);
if (concat == NULL)
return (NULL);
for (i = 0; i < len1; i++)
concat[i] = s1[i];
for (i = 0; i < n; i++)
concat[len1 + i] = s2[i];
concat[len1 + n] = '\0';
return (concat);
}
