#include <stdio.h>
/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector (array of command line arguments, not used)
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
(void)argv;
printf("%d\n", argc - 1);
return (0);
}
