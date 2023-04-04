#include "main.h"
/**
 * _memcpy - Copies n bytes from src pointer to dest pointer
 * @dest: Pointer to the destination array
 * @src: Pointer to the source array
 * @n: number of bytes to copy
 *
 * Return: Pointer to the destination array
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}

