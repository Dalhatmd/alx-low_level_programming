#include <unistd.h>
/**
 * main - program starts here
 *
 * Return: Always 1 (success)
 *
 */
int main(void)
{
	char stuff[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, stuff, 59);
	return (1);
}
