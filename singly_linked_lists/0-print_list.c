#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to the first node.
 *
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
size_t count = 0;
while (h)
{
if (h->str == NULL)
{
printf("[%u] (nil)\n", h->len);
}
else
{
printf("[%u] %s\n", h->len, h->str);
}
count++;
h = h->next;
}
return (count);
}
