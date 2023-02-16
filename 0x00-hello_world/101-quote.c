#include <unistd.h>
/**
 * main - program starts here
 *
 * Return: Always 1 (success)
 *
 */
int main(void)
{
	char stuff[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	write(2, stuff, 60);
	return (1);
}
