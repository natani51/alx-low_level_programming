#include "main.h"
/**
 * print_last_digit - prints the last digit of a numer.
 * @n: digit to find the last place of.
 * Return: The last digit.
 */
int print_last_digit(int n)
{
	int last_dig + n % 10;
		if (last_dig < 0)
			last_dig *= -1;
	_putchar(last_dig + '0');
	return (last_dig);
}
