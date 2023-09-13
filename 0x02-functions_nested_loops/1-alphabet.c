#include "main.h"

/**
 * main -  print_alphabet - print all alphabet in lowercase
 *
 * Description: This function prints 
 * all the lowercase letters from 'a' to 'z' using a for loop
 */

void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		_putchar(alph);

	_putchar('\n');
}
