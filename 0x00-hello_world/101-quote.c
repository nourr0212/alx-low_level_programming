#include <stdio.h>
#include <unistd.h>

/**
 * main - a C program that prints a line to a standard error
 *
 *
 *Return: return 1
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1); }
