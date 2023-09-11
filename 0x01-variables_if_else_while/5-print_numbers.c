#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints numbers from 0 to 9.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}

	putchar('\n');
	return (0);
}
