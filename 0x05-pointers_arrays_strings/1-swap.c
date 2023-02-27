#include "main.h"
/**
 * swap_int - Swaps to integers using their pointers
 *
 * @a: pointer to first variable
 * @b: pointer to second variable
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
