#include "main.h"



/**
 * print_alphabet - check the code for ALX School students.
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		_putchar (alp);
		alp++;
	}

	_putchar ('\n');
}

/**
 * main - check the code
 *
 *Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	return (0);
}
