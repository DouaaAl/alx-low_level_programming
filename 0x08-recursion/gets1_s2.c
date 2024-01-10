#include "main.h"

/**
 * gets1_s2 - main function
 * @s1: first param
 * @s2: second param
 * @s3: third param
 * Return: return 0 lor 1
 */

char *gets1_s2(char *s1, char *s2, char *s3)
{
	if (*s1 == '\0')
		return (s3);
	if (*s1 == *s2)
		s3 = s1;
	return (gets1_s2((s1 + 1) , s2, s3));
}
