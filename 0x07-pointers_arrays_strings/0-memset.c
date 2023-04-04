#include "main.h"
/**
 * _memset - Fill a memory block with a constant byte.
 *
 *This function fills the first n bytes of the memory area pointed to by s 
 * with the constant byte b.
 *
 * @s: A pointer to the memory area to be filled
 * @b: the constant byte to fill the memory area with
 * @n: the number of bytes to be filled
 *
 * Return: A pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

