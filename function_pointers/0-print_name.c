#include "function_pointers.h"

void print_name_uppercase(char *name);

/**
 * print_name - This function print the name that received.
 * @name: Name to print.
 * @f: Pointer to function.
 *
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f = &print_name_uppercase;
		
		(*f)(name);
	}
}
