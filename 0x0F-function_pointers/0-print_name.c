#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - it prints the given name
 * @name: param
 * @f: param
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	/*Recursion */
	f(name);
}
