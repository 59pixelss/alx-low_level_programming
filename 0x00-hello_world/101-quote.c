#include <stdio.h>
/*
 * File: 101-quote.c
 * Auth: Brennan D Baraban
 */

#include <unistd.h>

/**
 *  main - Prints out the last part of a quote in the standard error.
 *  Return: 1 if success.
 * main - Prints "and that piece of art is useful" - Dora Korpar, 2015-10-19",
 *                followed by a new line, to standard error.
 *
 * Return: Always 1.
 */
int main(void)
{
		write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 58);
			return (1);
}
	write(2,
	      "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	      59);

	return (1);
}
