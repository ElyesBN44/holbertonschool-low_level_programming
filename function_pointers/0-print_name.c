#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - Prints a name using the provided function pointer.
 * @name: The name of the person.
 * @f: Pointer to a function that takes a char.
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
{
f(name);
}
}
