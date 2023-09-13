#include "main.h"

/**
 * main -  print_alphabet - print all alphabet in lowercase
 *
 * Description: write alphabet
 */

void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		_putchar(alph);

	_putchar('\n');
}
