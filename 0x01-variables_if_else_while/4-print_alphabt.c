#include <stdio.h>

/**
 * main - Prints all lowercase letters except 'q' and 'e'
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int letter;

	for (letter = 97; letter <= 122; letter++)
	{
		if (letter != 101 && letter != 113)
		{
			putchar(letter);
		}
	}

	putchar('\n');
	return (0);
}
