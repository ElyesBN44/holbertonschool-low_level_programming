#include <stdlib.h>

/**
 * _calloc - allocates memory for an array.
 * @nmemb: number of elements.
 * @size: size of each element.
 * Return: pointer to allocated memory or NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int total_size;
void *ptr;
unsigned int i;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
total_size = nmemb * size;
ptr = malloc(total_size);
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i < total_size; i++)
{
((char *)ptr)[i] = 0;
}
return (ptr);
}
