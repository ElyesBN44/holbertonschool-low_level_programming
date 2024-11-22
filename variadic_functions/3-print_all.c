#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0;

	va_start(ap, format);

	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(ap, int));
			break;
		case 'i':
			printf("%d", va_arg(ap, int));
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			break;
		case 's':
			{
				char *s = va_arg(ap, char *);
				if (s == NULL)
					printf("(nil)");
				else
					printf("%s", s);
				break;
			}
		default:
			break;
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
