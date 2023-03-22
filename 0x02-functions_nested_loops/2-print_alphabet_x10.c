#include "main.h"


	/**
	 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
	 * followed by a new line
	 *
	 * Description: This function prints the alphabet 10 times in lowercase
	 * followed by a new line. It uses a nested loop to iterate through each
	 * letter of the alphabet and print it to the console, then repeats the
	 * process 10 times.
	 */
	void print_alphabet_x10(void)
	{
		char ch;
		int i;


		i = 0;


		while (i < 10)
		{
			ch = 'a';
			while (ch <= 'z')
			{
				_putchar(ch);
				ch++;
			}
			_putchar('\n');
			i++;
		}
}
