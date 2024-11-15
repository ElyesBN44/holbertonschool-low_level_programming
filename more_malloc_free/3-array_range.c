#include <stdlib.h>
/**
 * array_range - Creates an array of integers from min to max.
 * @min: The minimum integer value (inclusive).
 * @max: The maximum integer value (inclusive).
 * Description: This function allocates memory.
 * Return: A pointer to the newly created array of integers.
 */
int *array_range(int min, int max)
{
int size;
int *array;
int i;
if (min > max)
{
return (NULL);
}
size = max - min + 1;
array = malloc(size *sizeof(int));
if (array == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
array[i] = min + i;
}
return (array);
}
