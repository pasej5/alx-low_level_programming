#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints a list of variables with different data types
 * @format: list of types of arguments passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is NULL, print (nil) instead)
 * any other char should be ignored
 * see example
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char c, *s;
	float f;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				c = (char) va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				j = va_arg(args, int);
				printf("%d", j);
				break;
			case 'f':
				f = (float) va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					printf("(nil)");
				else
					printf("%s", s);
				break;
			default:
				i++;
				continue;
		}
		if (format[i + 1] != '\0' && (format[i] == 'c' || format[i] == 'i' ||
					      format[i] == 'f' || format[i] == 's'))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
