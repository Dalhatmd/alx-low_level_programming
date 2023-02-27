#include "main.h"
/**
 * reset_to_98 - Resets the variable that @n points to, to 98
 *
 * @n: pointer to a variable
 */
void reset_to_98(int *n)
{
	n = &n;
	*n = 98;
}
