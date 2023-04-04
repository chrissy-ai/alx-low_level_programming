#include "main.h"
/**
 * _strpbrk - Searches a string for any of aset of bytes
 * @s: Pointer to the string o be searched
 * @accept: Pointer to the string that has the characters to match
 *
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
		int k;

		while (*s)
		{
			for (k = 0; accept[k]; k++)
			{
			if (*s == accept[k])
			return (s);
			}
		s++;
		}

	return ('\0');
}

