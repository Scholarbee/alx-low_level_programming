#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 * @a: parameter for argument
 * @b: parameter for argument
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
