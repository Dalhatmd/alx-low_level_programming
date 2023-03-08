#include "main.h"
#include <string.h>
/**
 * is_palindrome - checks if a string is a palindrome
 *
 * @s: input string
 *
 * Return: 0 if palindrome, 1 otherwise
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len <= 1)
		return (1);
	if (s[0] == s[len - 1])
		s[len - 1] = '\0';
	int result = is_palindrome(s + 1);

	s[len - 1] = s[len];
	return (result);

	return (0);
}
