#include "main.h"
/**
 * print_alphabet - prints the english alphabet from a-z.
 * Return: Nothing.
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
