#include "main.h"

/**
 * print_string - function to print string
 * @string: string to be printed
 * Return: Count, number of characters in string
 */
int print_string(char *string)
{
	int i, count = 0;

	for (i = 0; string[i] != '\0'; i++)
	{
		count += _putchar(string[i]);
	}
	return (count);
}
