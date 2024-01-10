#include "main.h"

/**
 * wildcmp - our main function
 * @s1: first string
 * @s2: second string
 * Return: returns 0 or 1 depending on the function
 */

int wildcmp(char *s1, char *s2)
{
	char *nexts2;

	nexts2 = s2 + 1;

	if (*s2 == '*')
	{
		if ((*nexts2 != '*') && (*nexts2 != '\0'))
		{
			if ((*s1 != *nexts2) && (*s1 != '\0'))
				return (wildcmp((s1 + 1), s2));
			if (*s1 == '\0')
				return (0);
			if((wildcmp((s1+1), s2)) != 0)
				return (wildcmp((s1 + 1), s2));
			s2 = nexts2;
		}

		else if (*nexts2 == '\0')
		{
			return (1);
		}

		else
		{
			return (wildcmp(s1, (s2 + 1)));
		}
	}

	if (*s2 != *s1)
		return (0);
	if (*s2 == '\0')
		return (1);
	return (wildcmp((s1 + 1), (s2 + 1)));
}
