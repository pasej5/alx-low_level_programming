#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"


/**
 * print_char - prints a char
 *
 * @args: a va_list containing the char to print
 */
void print_char(va_list args)
{
	char c = (char) va_arg(args, int);

	printf("%c", c);
}

/**
 * print_int - prints an int
 *
 * @args: a va_list containing the int to print
 */
void print_int(va_list args)
{
	int i = va_arg(args, int);

	printf("%d", i);
}

/**
 * print_float - prints a float
 *
 * @args: a va_list containing the float to print
 */
void print_float(va_list args)
{
	float f = (float) va_arg(args, double);

	printf("%f", f);
}

/**
 * print_string - prints a string
 *
 * @args: a va_list containing the string to print
 */
void print_string(va_list args)
{
	char *s = va_arg(args, char *);

	if (s == NULL)
		printf("(nil)");
	else
		printf("%s", s);
}

/**
 * print_all - prints any combination of integers, floats, chars, and strings
 *
 * @format: a list of types of arguments passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is NULL, print (nil) instead
 * any other char should be ignored
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				print_char(args);
				break;
			case 'i':
				print_int(args);
				break;
			case 'f':
				print_float(args);
				break;
			case 's':
				print_string(args);
				break;
		}

		if (format[i + 1] != '\0' && (format[i] == 'c' || format[i] == 'i' ||
					      format[i] == 'f' || format[i] == 's'))
			printf(", ");

		i++;
	}

	printf("\n");
	va_end(args);
}

