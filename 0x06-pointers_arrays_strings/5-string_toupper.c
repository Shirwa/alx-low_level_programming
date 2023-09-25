#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 * @s: string to modify
 *
 * Return: the resulting string
 */
char *string_toupper(char *s)
{
<<<<<<< HEAD
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] >= 'a' && s[a] <= 'z')
			s[a] = s[a] - 32;
=======
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
>>>>>>> 1d58131bba19758bffb5ac331e17433480eeede3
	}

	return (s);
}
<<<<<<< HEAD

=======
>>>>>>> 1d58131bba19758bffb5ac331e17433480eeede3
